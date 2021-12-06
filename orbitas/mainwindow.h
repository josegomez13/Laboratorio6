#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QGraphicsScene>
#include <QTimer>
#include "cuerpo.h"
#include <QList>

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_sistema1_clicked();
    void mover1();
    void on_sistema2_clicked();
    void mover2();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *escena;

    //planetas sistema 1
    cuerpo *planeta1;
    cuerpo *planeta2;
    cuerpo *planeta3;

    cuerpo *planeta1aux;
    cuerpo *planeta3aux;

    QTimer *timer1;
    //planetas sistema 2

    cuerpo *planet1;
    cuerpo *planet2;
    cuerpo *planet3;
    cuerpo *planet4;
    cuerpo *planet5;

    cuerpo *planet2aux;
    cuerpo *planet3aux;
    cuerpo *planet4aux;
    cuerpo *planet5aux;
    QTimer *timer2;


};
#endif // MAINWINDOW_H
