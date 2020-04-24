/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue 21. Apr 21:02:19 2020
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGraphicsView>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *btnDeleteClass;
    QListWidget *lwImages;
    QPushButton *btnClasses;
    QListWidget *lwClasses;
    QLabel *lClasses;
    QToolButton *btnSave;
    QPushButton *btnImages;
    QPushButton *btnDeleteImage;
    QPushButton *btnDispalyImg;
    QGraphicsView *graphicsView;
    QPushButton *btnPolygon;
    QPushButton *btnSquare;
    QPushButton *btnTriangle;
    QPushButton *btnTrapezium;
    QPushButton *btnSortNameASC;
    QLabel *tvFileName_3;
    QPushButton *btnSortNameDes;
    QPushButton *btnSortDateAcs;
    QPushButton *btnSortDateDes;
    QPushButton *btnSortClassAcs;
    QPushButton *btnSortClassDec;
    QLabel *lSortClasses;
    QLabel *lSortImages;
    QLabel *lShapes;
    QPushButton *btnDeleteShape;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1224, 670);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        btnDeleteClass = new QPushButton(centralWidget);
        btnDeleteClass->setObjectName(QString::fromUtf8("btnDeleteClass"));
        btnDeleteClass->setGeometry(QRect(260, 560, 101, 23));
        lwImages = new QListWidget(centralWidget);
        lwImages->setObjectName(QString::fromUtf8("lwImages"));
        lwImages->setGeometry(QRect(20, 30, 211, 261));
        btnClasses = new QPushButton(centralWidget);
        btnClasses->setObjectName(QString::fromUtf8("btnClasses"));
        btnClasses->setGeometry(QRect(260, 330, 101, 23));
        lwClasses = new QListWidget(centralWidget);
        lwClasses->setObjectName(QString::fromUtf8("lwClasses"));
        lwClasses->setGeometry(QRect(20, 330, 211, 261));
        lClasses = new QLabel(centralWidget);
        lClasses->setObjectName(QString::fromUtf8("lClasses"));
        lClasses->setGeometry(QRect(20, 306, 71, 20));
        QFont font;
        font.setPointSize(12);
        lClasses->setFont(font);
        lClasses->setFrameShape(QFrame::Box);
        btnSave = new QToolButton(centralWidget);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        btnSave->setGeometry(QRect(1090, 540, 91, 61));
        btnImages = new QPushButton(centralWidget);
        btnImages->setObjectName(QString::fromUtf8("btnImages"));
        btnImages->setGeometry(QRect(260, 30, 101, 23));
        btnDeleteImage = new QPushButton(centralWidget);
        btnDeleteImage->setObjectName(QString::fromUtf8("btnDeleteImage"));
        btnDeleteImage->setGeometry(QRect(260, 270, 101, 23));
        btnDispalyImg = new QPushButton(centralWidget);
        btnDispalyImg->setObjectName(QString::fromUtf8("btnDispalyImg"));
        btnDispalyImg->setGeometry(QRect(260, 60, 101, 23));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(400, 30, 641, 461));
        graphicsView->setFrameShape(QFrame::Panel);
        graphicsView->setFrameShadow(QFrame::Plain);
        graphicsView->setLineWidth(1);
        btnPolygon = new QPushButton(centralWidget);
        btnPolygon->setObjectName(QString::fromUtf8("btnPolygon"));
        btnPolygon->setGeometry(QRect(1090, 340, 91, 71));
        btnSquare = new QPushButton(centralWidget);
        btnSquare->setObjectName(QString::fromUtf8("btnSquare"));
        btnSquare->setGeometry(QRect(1090, 100, 91, 71));
        btnSquare->setDefault(true);
        btnTriangle = new QPushButton(centralWidget);
        btnTriangle->setObjectName(QString::fromUtf8("btnTriangle"));
        btnTriangle->setGeometry(QRect(1090, 180, 91, 71));
        btnTrapezium = new QPushButton(centralWidget);
        btnTrapezium->setObjectName(QString::fromUtf8("btnTrapezium"));
        btnTrapezium->setGeometry(QRect(1090, 260, 91, 71));
        btnSortNameASC = new QPushButton(centralWidget);
        btnSortNameASC->setObjectName(QString::fromUtf8("btnSortNameASC"));
        btnSortNameASC->setGeometry(QRect(260, 120, 101, 23));
        tvFileName_3 = new QLabel(centralWidget);
        tvFileName_3->setObjectName(QString::fromUtf8("tvFileName_3"));
        tvFileName_3->setGeometry(QRect(20, 6, 71, 20));
        tvFileName_3->setFont(font);
        tvFileName_3->setFrameShape(QFrame::Box);
        btnSortNameDes = new QPushButton(centralWidget);
        btnSortNameDes->setObjectName(QString::fromUtf8("btnSortNameDes"));
        btnSortNameDes->setGeometry(QRect(260, 150, 101, 23));
        btnSortDateAcs = new QPushButton(centralWidget);
        btnSortDateAcs->setObjectName(QString::fromUtf8("btnSortDateAcs"));
        btnSortDateAcs->setGeometry(QRect(260, 200, 101, 23));
        btnSortDateDes = new QPushButton(centralWidget);
        btnSortDateDes->setObjectName(QString::fromUtf8("btnSortDateDes"));
        btnSortDateDes->setGeometry(QRect(260, 230, 101, 23));
        btnSortClassAcs = new QPushButton(centralWidget);
        btnSortClassAcs->setObjectName(QString::fromUtf8("btnSortClassAcs"));
        btnSortClassAcs->setGeometry(QRect(260, 420, 101, 23));
        btnSortClassDec = new QPushButton(centralWidget);
        btnSortClassDec->setObjectName(QString::fromUtf8("btnSortClassDec"));
        btnSortClassDec->setGeometry(QRect(260, 450, 101, 23));
        lSortClasses = new QLabel(centralWidget);
        lSortClasses->setObjectName(QString::fromUtf8("lSortClasses"));
        lSortClasses->setGeometry(QRect(260, 390, 51, 21));
        lSortClasses->setFont(font);
        lSortClasses->setFrameShape(QFrame::Box);
        lSortImages = new QLabel(centralWidget);
        lSortImages->setObjectName(QString::fromUtf8("lSortImages"));
        lSortImages->setGeometry(QRect(260, 90, 51, 21));
        lSortImages->setFont(font);
        lSortImages->setFrameShape(QFrame::Box);
        lShapes = new QLabel(centralWidget);
        lShapes->setObjectName(QString::fromUtf8("lShapes"));
        lShapes->setGeometry(QRect(1100, 30, 71, 21));
        lShapes->setFont(font);
        lShapes->setFrameShape(QFrame::Box);
        btnDeleteShape = new QPushButton(centralWidget);
        btnDeleteShape->setObjectName(QString::fromUtf8("btnDeleteShape"));
        btnDeleteShape->setGeometry(QRect(1090, 462, 91, 31));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(400, 500, 371, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(400, 520, 431, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(400, 540, 601, 16));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(400, 560, 581, 16));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(400, 580, 371, 16));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1224, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        btnDeleteClass->setText(QApplication::translate("MainWindow", "Delete", 0, QApplication::UnicodeUTF8));
        btnClasses->setText(QApplication::translate("MainWindow", "Classes...", 0, QApplication::UnicodeUTF8));
        lClasses->setText(QApplication::translate("MainWindow", "Classes:", 0, QApplication::UnicodeUTF8));
        btnSave->setText(QApplication::translate("MainWindow", "Save Annotations", 0, QApplication::UnicodeUTF8));
        btnImages->setText(QApplication::translate("MainWindow", "Images...", 0, QApplication::UnicodeUTF8));
        btnDeleteImage->setText(QApplication::translate("MainWindow", "Delete", 0, QApplication::UnicodeUTF8));
        btnDispalyImg->setText(QApplication::translate("MainWindow", "Display", 0, QApplication::UnicodeUTF8));
        btnPolygon->setText(QApplication::translate("MainWindow", "Polygon", 0, QApplication::UnicodeUTF8));
        btnSquare->setText(QApplication::translate("MainWindow", "Square", 0, QApplication::UnicodeUTF8));
        btnTriangle->setText(QApplication::translate("MainWindow", "Triangle", 0, QApplication::UnicodeUTF8));
        btnTrapezium->setText(QApplication::translate("MainWindow", "Trapezium ", 0, QApplication::UnicodeUTF8));
        btnSortNameASC->setText(QApplication::translate("MainWindow", "Name Ascending", 0, QApplication::UnicodeUTF8));
        tvFileName_3->setText(QApplication::translate("MainWindow", "Images:", 0, QApplication::UnicodeUTF8));
        btnSortNameDes->setText(QApplication::translate("MainWindow", " Name Decending", 0, QApplication::UnicodeUTF8));
        btnSortDateAcs->setText(QApplication::translate("MainWindow", " Date Ascending", 0, QApplication::UnicodeUTF8));
        btnSortDateDes->setText(QApplication::translate("MainWindow", "Date Decending", 0, QApplication::UnicodeUTF8));
        btnSortClassAcs->setText(QApplication::translate("MainWindow", "Name Ascendng ", 0, QApplication::UnicodeUTF8));
        btnSortClassDec->setText(QApplication::translate("MainWindow", "Name Decending ", 0, QApplication::UnicodeUTF8));
        lSortClasses->setText(QApplication::translate("MainWindow", "Sort:", 0, QApplication::UnicodeUTF8));
        lSortImages->setText(QApplication::translate("MainWindow", "Sort:", 0, QApplication::UnicodeUTF8));
        lShapes->setText(QApplication::translate("MainWindow", "Shapes:", 0, QApplication::UnicodeUTF8));
        btnDeleteShape->setText(QApplication::translate("MainWindow", "Delete Shape", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "1. Import the desired folder of images with the Images Button. ", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "2. Display the desired image by clicking on its name and then clicking the Dispay Button.  ", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "3. Import the desired folder of classes with the Classses button. Once imported, you can sort the files using availibe buttons.", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "4. Using the shape button draw the shapes on top of the images. Click and drag the centre of the shape to move.", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "5.Click the save button to create a new file. ", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
