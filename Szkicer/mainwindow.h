#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "canvas.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void resizeEvent(QResizeEvent *);
    void wheelEvent(QWheelEvent *);

private:
    Ui::MainWindow *ui;
    Canvas *canvas;
};

#endif // MAINWINDOW_H
