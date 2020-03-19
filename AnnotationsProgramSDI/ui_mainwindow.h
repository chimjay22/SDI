/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Thu 12. Mar 16:14:50 2020
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
#include <QtGui/QComboBox>
#include <QtGui/QGraphicsView>
#include <QtGui/QGridLayout>
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
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QPushButton *btnTriangle_2;
    QPushButton *btnSquare_2;
    QPushButton *btnTrapezium_2;
    QPushButton *btnPoly_2;
    QLabel *tlImageView;
    QPushButton *btnDeleteClass;
    QListWidget *lwImages;
    QPushButton *btnClasses;
    QListWidget *lwClasses;
    QComboBox *comboBox2;
    QLabel *tvFileName_2;
    QToolButton *btnSave;
    QComboBox *comboBox1;
    QPushButton *btnImages;
    QPushButton *btnDeleteImage;
    QPushButton *btnDispalyImg;
    QGraphicsView *graphicsView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1218, 833);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 380, 160, 151));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        btnTriangle_2 = new QPushButton(gridLayoutWidget);
        btnTriangle_2->setObjectName(QString::fromUtf8("btnTriangle_2"));

        gridLayout_2->addWidget(btnTriangle_2, 0, 0, 1, 1);

        btnSquare_2 = new QPushButton(gridLayoutWidget);
        btnSquare_2->setObjectName(QString::fromUtf8("btnSquare_2"));
        btnSquare_2->setDefault(true);

        gridLayout_2->addWidget(btnSquare_2, 0, 1, 1, 1);

        btnTrapezium_2 = new QPushButton(gridLayoutWidget);
        btnTrapezium_2->setObjectName(QString::fromUtf8("btnTrapezium_2"));

        gridLayout_2->addWidget(btnTrapezium_2, 1, 0, 1, 1);

        btnPoly_2 = new QPushButton(gridLayoutWidget);
        btnPoly_2->setObjectName(QString::fromUtf8("btnPoly_2"));

        gridLayout_2->addWidget(btnPoly_2, 1, 1, 1, 1);

        tlImageView = new QLabel(centralWidget);
        tlImageView->setObjectName(QString::fromUtf8("tlImageView"));
        tlImageView->setGeometry(QRect(320, 10, 641, 291));
        tlImageView->setMouseTracking(true);
        tlImageView->setFrameShape(QFrame::Box);
        tlImageView->setScaledContents(true);
        btnDeleteClass = new QPushButton(centralWidget);
        btnDeleteClass->setObjectName(QString::fromUtf8("btnDeleteClass"));
        btnDeleteClass->setGeometry(QRect(240, 340, 71, 23));
        lwImages = new QListWidget(centralWidget);
        lwImages->setObjectName(QString::fromUtf8("lwImages"));
        lwImages->setGeometry(QRect(20, 10, 211, 161));
        btnClasses = new QPushButton(centralWidget);
        btnClasses->setObjectName(QString::fromUtf8("btnClasses"));
        btnClasses->setGeometry(QRect(240, 200, 75, 23));
        lwClasses = new QListWidget(centralWidget);
        lwClasses->setObjectName(QString::fromUtf8("lwClasses"));
        lwClasses->setGeometry(QRect(20, 200, 211, 161));
        comboBox2 = new QComboBox(centralWidget);
        comboBox2->setObjectName(QString::fromUtf8("comboBox2"));
        comboBox2->setGeometry(QRect(240, 230, 75, 22));
        tvFileName_2 = new QLabel(centralWidget);
        tvFileName_2->setObjectName(QString::fromUtf8("tvFileName_2"));
        tvFileName_2->setGeometry(QRect(20, 180, 151, 16));
        btnSave = new QToolButton(centralWidget);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        btnSave->setGeometry(QRect(60, 540, 81, 51));
        comboBox1 = new QComboBox(centralWidget);
        comboBox1->setObjectName(QString::fromUtf8("comboBox1"));
        comboBox1->setGeometry(QRect(240, 40, 75, 22));
        btnImages = new QPushButton(centralWidget);
        btnImages->setObjectName(QString::fromUtf8("btnImages"));
        btnImages->setGeometry(QRect(240, 10, 71, 23));
        btnDeleteImage = new QPushButton(centralWidget);
        btnDeleteImage->setObjectName(QString::fromUtf8("btnDeleteImage"));
        btnDeleteImage->setGeometry(QRect(240, 150, 71, 23));
        btnDispalyImg = new QPushButton(centralWidget);
        btnDispalyImg->setObjectName(QString::fromUtf8("btnDispalyImg"));
        btnDispalyImg->setGeometry(QRect(240, 70, 71, 23));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(320, 310, 641, 281));
        graphicsView->setFrameShape(QFrame::Panel);
        graphicsView->setFrameShadow(QFrame::Plain);
        graphicsView->setLineWidth(1);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1218, 20));
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
        btnTriangle_2->setText(QApplication::translate("MainWindow", "Triangle", 0, QApplication::UnicodeUTF8));
        btnSquare_2->setText(QApplication::translate("MainWindow", "Square", 0, QApplication::UnicodeUTF8));
        btnTrapezium_2->setText(QApplication::translate("MainWindow", "Trapezium ", 0, QApplication::UnicodeUTF8));
        btnPoly_2->setText(QApplication::translate("MainWindow", "Polygon", 0, QApplication::UnicodeUTF8));
        tlImageView->setText(QString());
        btnDeleteClass->setText(QApplication::translate("MainWindow", "Delete", 0, QApplication::UnicodeUTF8));
        btnClasses->setText(QApplication::translate("MainWindow", "Classes...", 0, QApplication::UnicodeUTF8));
        tvFileName_2->setText(QApplication::translate("MainWindow", "Classes", 0, QApplication::UnicodeUTF8));
        btnSave->setText(QApplication::translate("MainWindow", "Save Class file", 0, QApplication::UnicodeUTF8));
        btnImages->setText(QApplication::translate("MainWindow", "Images...", 0, QApplication::UnicodeUTF8));
        btnDeleteImage->setText(QApplication::translate("MainWindow", "Delete", 0, QApplication::UnicodeUTF8));
        btnDispalyImg->setText(QApplication::translate("MainWindow", "Display", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
