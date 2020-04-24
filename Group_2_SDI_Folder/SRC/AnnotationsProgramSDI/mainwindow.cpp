#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileInfo>


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
    QDir directory = QFileDialog::getExistingDirectory(this,tr("Choose a Image Directory"),QDir::homePath()); //creates a file dialog to open folder

    //clears list's before after new folder are imported
    clearLwImages();
    clearCreationDate();

    // only load filenames with acceptable image postfixes
    listImages = directory.entryList(QStringList() << "*.jpg" << "*.png" << "*.jpeg", QDir::Files);

    // populate listbox with acceptable files
    if (listImages.length() > 0) {

        currentImageFolder = directory.path();
        clearLwImages();

        foreach(QFileInfo image, listImages) {
            ui->lwImages->addItem(image.baseName());
            listImageFilePath.append(image.absolutePath());
            creationDate.append(image.created().toString());

        }

    } else {
        // show user error box if no images were found in folder
        QMessageBox::information(this, "ERROR", "No images found in that directory"); }

}

void MainWindow::on_btnClasses_clicked()
{
    classFile = QFileDialog::getOpenFileName(this, tr("Select Class File"),QDir::homePath(), tr("Classes(*.txt)"));
    QFile inputFile(classFile);
    if(!inputFile.open(QIODevice::ReadOnly))
    {
        //Displays message box with error info
        QMessageBox::warning(this,tr("File opening Error"), ("Unable to load class into project."));
    }
    QTextStream in(&inputFile);
    while (!in.atEnd())
       {
          QString line = in.readLine();
          ui->lwClasses->addItem(line);
          listClasses.append(line);
       }
       inputFile.close();
}

void MainWindow::on_lwImages_itemClicked(QListWidgetItem *item) {
    // store filename ready for opening
    currentImageFile = item->text();
}

//Clear Lists
void MainWindow::on_btnDeleteImage_clicked()
{
    clearLwImages();
    clearListImages();
}

void MainWindow::clearLwImages(){
    ui->lwImages->clear();
}

void MainWindow::clearListImages(){
    listImages.erase(listImages.begin(), listImages.end());
}
void MainWindow::clearCreationDate(){
    creationDate.erase(creationDate.begin(), creationDate.end());
}
void MainWindow::on_btnDeleteClass_clicked()
{
    clearListClass();
    clearListWidgetClass();
}

void MainWindow::clearListClass(){
    llClasses.clear();
}

void MainWindow::clearListWidgetClass(){
    ui->lwClasses->clear();
}

//SHPAES
void MainWindow::on_btnTriangle_clicked()
{
    QPolygonF Triangle;
    QPen redPen(Qt::red);
    redPen.setWidth(2);

    Triangle.append(QPointF(-50.,0));
    Triangle.append(QPointF(0,-50));
    Triangle.append(QPointF(50.,0));
    Triangle.append(QPointF(-50.,0));

    polygon = scene->addPolygon(Triangle,redPen);
    polygon->setFlag(QGraphicsItem::ItemIsMovable);

}
void MainWindow::on_btnSquare_clicked()
{
    QPen redPen(Qt::red);
    redPen.setWidth(2);
    rectangle = scene->addRect(-100,100,50,50,redPen);
    rectangle->setFlag(QGraphicsItem::ItemIsMovable);
}
void MainWindow::on_btnTrapezium_clicked()
{
    QPolygonF Trapezium;
    QPen redPen(Qt::red);
    redPen.setWidth(2);


    Trapezium.append(QPointF(10.,0));
    Trapezium.append(QPointF(50,0));
    Trapezium.append(QPointF(70,50));
    Trapezium.append(QPointF(-10,50));
    Trapezium.append(QPointF(10.,0));


    polygon = scene->addPolygon(Trapezium,redPen);
    polygon->setFlag(QGraphicsItem::ItemIsMovable);
}
void MainWindow::on_btnPoly_clicked()
{


}

void MainWindow::on_btnDeleteShape_clicked()
{
}

QStringList MainWindow::sortList(QStringList list, bool order){
    int size = list.count();

    for(int i=0; i< size; i++)
        {
            for(int j=0; j< size-1; j++)
            {
                if(order == true){
                    if(list[j]>list[j+1]){
                        //Switches element values
                        QString temp = list[j];
                        list[j] = list[j+1];
                        list[j+1] = temp;
                    }
                }else{
                    if(list[j]<list[j+1]){
                        //Switches element values
                        QString temp = list[j];
                        list[j] = list[j+1];
                        list[j+1] = temp;
                    }
                }
            }
        }
    return list;
}

//DISPLAY IMAGE
void MainWindow::on_btnDispalyImg_clicked()
{
    // check if image list is populated
    if (ui->lwImages->count() > 0) {
        // get the filename
        scene->clear();
        if (currentImageFile != ""){
            QString path = currentImageFolder + "/" + currentImageFile;

            // Load image from the file using its file path
            QPixmap image(path);
            int width= ui->graphicsView->width();
            int height= ui->graphicsView->height();
            scene->setBackgroundBrush(image.scaled(width,height,Qt::KeepAspectRatio));
            

            // Create a graphics scene and add the image to it
            pixmapItem = new QGraphicsPixmapItem(image);
            scene->addItem(pixmapItem);

            // Set this new scene to the ui element
            ui->graphicsView->setScene(scene);
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

//SORT IMAGE NAMES
void MainWindow::on_btnSortNameASC_clicked()
{
    ui->lwImages->clear();

    ui->lwImages->addItems(sortList(listImages,true));
}

void MainWindow::on_btnSortNameDes_clicked()
{
   ui->lwImages->clear();

   ui->lwImages->addItems(sortList(listImages,false));
}

//SORT IMAGE DATES

void MainWindow::on_btnSortDateAcs_clicked()
{
    clearLwImages();
    clearCreationDate();

    int size = listImageFilePath.count();

    for(int i=0; i< size; i++)
    {
        QFileInfo info(listImageFilePath[i]);
        creationDate.append(info.created().toString());
        
    }

    //Bubble Sort
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size-1; j++)
        {
            if(creationDate[j] > creationDate[j+1])
            {
                QString temp =creationDate[j];
                creationDate[j] = creationDate[j+1];
                creationDate[j+1] = temp;
            }
        }

    }

    ui->lwImages->addItems(creationDate);

}

void MainWindow::on_btnSortDateDes_clicked()
{
    clearLwImages();
    clearCreationDate();

    int size = listImageFilePath.count();

    for(int i=0; i< size; i++)
    {
        QFileInfo info(listImageFilePath[i]);
        creationDate.append(info.created().toString());
        
    }

    //Bubble Sort
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size-1; j++)
        {
            if(creationDate[j] < creationDate[j+1])
            {
                QString temp =creationDate[j];
                creationDate[j] = creationDate[j+1];
                creationDate[j+1] = temp;
            }
        }
    }

    ui->lwImages->addItems(creationDate);
    

}

//SORT ClASSES

void MainWindow::on_btnSortClassAcs_clicked()
{
    clearListWidgetClass();

    ui->lwClasses->addItems(sortList(listClasses,true));
}


void MainWindow::on_btnSortClassDec_clicked()
{
    clearListWidgetClass();
    ui->lwClasses->addItems(sortList(listClasses,false));
}



void MainWindow::on_btnSave_clicked()
{

}




