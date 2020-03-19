#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>

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
    QGraphicsEllipseItem *ellipse;


private slots:
    void on_btnDispalyImg_clicked();
    void on_btnSave_clicked();
    void on_btnPoly_2_clicked();
    void on_btnTrapezium_2_clicked();
    void on_btnSquare_2_clicked();
    void on_btnTriangle_2_clicked();
    void on_btnDeleteClass_clicked();
    void on_btnDeleteImage_clicked();
    void on_btnClasses_clicked();
    void on_btnImages_clicked();
};

#endif // MAINWINDOW_H
