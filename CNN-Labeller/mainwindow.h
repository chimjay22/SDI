#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QString currentFolder;
    QString currentFile;
    QTimer *timer;
    const int SAVEINTERVAL = 50000;

    void autosave();
private slots:
    void on_BrowseImages_clicked();

    void on_ImageList_itemClicked(QListWidgetItem *item);

    void on_OpenImage_clicked();

    //void on_ImageList_itemActivated(QListWidgetItem *item);

    //void on_ImageList_itemDoubleClicked(QListWidgetItem *item);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
