#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include <QDebug>
#include <QLinkedList>
#include <QListWidget>
#include <QFileDialog>
#include <QPixmap>
#include "QGraphicsPixmapItem"
#include <QMessageBox>
#include <QDir>
#include <QHash>
#include <dirent.h>
#include <QMutableLinkedListIterator>
#include <QFileInfo>

#include "graphicscustom.h"


namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    void changeEvent(QEvent *e);



private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    QGraphicsPixmapItem* pixmapItem;    
    QGraphicsPolygonItem *polygon;
    QPolygon customPolygon;

    QStringList listImages;
    QStringList listClasses;

    QStringList creationDate;
    QStringList sortedDateList; 
    QStringList listImageFilePath;
    QLinkedList<QString> llClasses;

    QString currentImageFolder;
    QString currentImageFile;
    QString classFile;

    QString currentClassFolder;
    QString currentClassFile;

    GraphicsCustom * CustomGraphicsView;

    const int SHAPE_WIDTH = 2;// shape outline

    // min/max points for polygon
    const int MINIMUM_POINTS = 3;
    const int MAXIMUM_POINTS = 8;


    bool drawingPoly = false; // flag TRUE when user drawing custom poly
    QStringList sortList(QStringList list, bool order);
private slots:

    //void on_GraphicsCustom_clicked(QMouseEvent *e);

    // sorting
    void on_btnSortClassDec_clicked();
    void on_btnSortDateDes_clicked();
    void on_btnSortClassAcs_clicked();
    void on_btnSortNameASC_clicked();
    void on_btnSortDateAcs_clicked();
    void on_btnSortNameDes_clicked();


    // image display
    void on_btnDispalyImg_clicked();
    void on_lwImages_itemClicked(QListWidgetItem *item);
    void on_btnSave_clicked();

    //  shapes
    void on_btnPolygon_clicked();
    void on_btnTrapezium_clicked();
    void on_btnSquare_clicked();
    void on_btnTriangle_clicked();
    void on_btnDeleteShape_clicked();

    void on_btnDeleteClass_clicked();
    void on_btnDeleteImage_clicked();
    void on_btnClasses_clicked();
    void on_btnImages_clicked();

    //Clear Lists
    void clearLwImages();
    void clearListImages();
    void clearCreationDate();
    void clearListClass();
    void clearListWidgetClass();

};


#endif // MAINWINDOW_H
