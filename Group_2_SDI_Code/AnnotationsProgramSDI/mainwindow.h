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
    QGraphicsEllipseItem *ellipse;
    QGraphicsRectItem *rectangle;
    QGraphicsPolygonItem *polygon;


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




private slots:

    void on_btnDeleteShape_clicked();
    void on_btnSortClassDec_clicked();
    void on_btnSortDateDes_clicked();
    void on_btnSortClassAcs_clicked();
    void on_btnSortNameASC_clicked();
    void on_btnSortDateAcs_clicked();
    void on_btnSortNameDes_clicked();

    void on_btnDispalyImg_clicked();
    void on_lwImages_itemClicked(QListWidgetItem *item);
    void on_btnSave_clicked();

    void on_btnPoly_clicked();
    void on_btnTrapezium_clicked();
    void on_btnSquare_clicked();
    void on_btnTriangle_clicked();

    void on_btnDeleteClass_clicked();
    void on_btnDeleteImage_clicked();
    void on_btnClasses_clicked();
    void on_btnImages_clicked();

    QStringList sortList(QStringList list, bool order);

    //Clear Lists
    void clearLwImages();
    void clearListImages();
    void clearCreationDate();
    void clearListClass();
    void clearListWidgetClass();

};


#endif // MAINWINDOW_H
