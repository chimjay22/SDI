#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "QFileDialog"
#include "QMessageBox"
#include "QDir"
#include "QTimer"
#include "QDebug"
#include "QPainter"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // timer runs while window is open, calling autosave method when SAVEINTERVAL is reached
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, QOverload<>::of(&MainWindow::autosave));
    timer->start(SAVEINTERVAL);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::autosave() {
    // TODO: Autosave program data

}

// SIGNALS
void MainWindow::on_BrowseImages_clicked()
{
    // browse dialog box to locate images folder, then load folder contents to QDir class
    QDir directory(QFileDialog::getExistingDirectory(this, "Open a Folder", QDir::homePath()));

    // only load filenames with acceptable image postfixes
    QStringList images = directory.entryList(QStringList() << "*.jpg" << "*.png" << "*.jpeg", QDir::Files);

    // populate listbox with acceptable files
    if (images.length() > 0) {
        // store path for later
        currentFolder = directory.path();
        foreach(QString image, images) {
            ui->ImageList->addItem(image);
        }
    } else {
        // show user error box if no images were found in folder
        QMessageBox::information(this, "ERROR", "No images found in that directory"); }
}



void MainWindow::on_OpenImage_clicked()
{
    // check if image list is populated
    if (ui->ImageList->count() > 0) {
        // get the filename
        if (currentFile != ""){
            QString path = currentFolder + currentFile;
            qInfo() << path << endl;
            QPixmap image(path);
            ui->ImageBox->setPixmap(image);
            // TODO, make image draw to screen (???)
        }
        else {
            // user hasnt selected file, so return
            QMessageBox::information(this, "ERROR", "No file selected");
            return;
        }
    } else {
        // folder hasnt been selected, so return
        QMessageBox::information(this, "ERROR", "No folder selected");
        return;
    }
}



void MainWindow::on_ImageList_itemClicked(QListWidgetItem *item)
{
    // store filename ready for opening
    currentFile = item->text();
}

