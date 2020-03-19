#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QPixmap>
#include <QMessageBox>
#include <QDir>
#include <dirent.h>
#include <string>
#include <QVector>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void MainWindow::on_btnImages_clicked()
{
    QDir images = QFileDialog::getExistingDirectory(this,tr("Choose a Directory"),"C:/Users/Joshua Mc/Documents/AnnotationsProgramSDI"); //creates a file dialog to open folder
    foreach (QFileInfo var, images.entryInfoList()){ //for each loop to go through each file in the specified directory.
         ui->lwImages->addItem(var.baseName()); //populate list widget with file names
    }
}

void MainWindow::on_btnClasses_clicked()
{
    QDir classes = QFileDialog::getExistingDirectory(this,tr("Choose a Directory"),"C:/Users/Joshua Mc/Documents/AnnotationsProgramSDI");
    foreach (QFileInfo var, classes.entryInfoList()){
        ui->lwClasses->addItem(var.baseName());
    }
}

//DELETE FILES
void MainWindow::on_btnDeleteImage_clicked()
{
    ui->lwImages->clear();
}

void MainWindow::on_btnDeleteClass_clicked()
{
    ui->lwClasses->clear();
}

//SHPAES

void MainWindow::on_btnTriangle_2_clicked()
{

}

void MainWindow::on_btnSquare_2_clicked()
{

}

void MainWindow::on_btnTrapezium_2_clicked()
{

}

void MainWindow::on_btnPoly_2_clicked()
{

}

//SAVE
void MainWindow::on_btnSave_clicked()
{

}

void MainWindow::on_btnDispalyImg_clicked()
{
    //current code doesnt work so is commented out

    /*foreach (QFileInfo var, image){
        ui->lwClasses->addItem(var.baseName());
    }

    if(valid){
        image=image.scaledToWidth(ui->tlImageView->width(), Qt::SmoothTransformation);
        ui->tlImageView->setPixmap(QPixmap::fromImage(image));
        ui->lwImages->addItem(directoryName);

    }else{
        //Displays message box with error info
        QMessageBox::warning(this,tr("File opening Error"), ("Unable to load image into project."));
    }*/


}


//SORTING FUNCTIONS

void fileNameAscending()
{
    //current code does work
    /*QVector<string>imageNames;

    for(int i = 0; i < lwImages->count(); i++)
    {
        QString str = lwImages.item(i)->text();
        QListWidgetItem* item = lwImages->item(i);
        //Do stuff!
        imageNames.push_back(str);
    }*/

}
void fileNameDecending()
{
    //will use bubble sort
}
void fileDateAscending()
{

}
void fileDateDescending()
{


}
