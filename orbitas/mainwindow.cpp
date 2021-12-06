#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <fstream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    escena = new QGraphicsScene;
    ui->graphicsView->setScene(escena);
    escena->setSceneRect(0,0,1000,700);
    escena->setBackgroundBrush(QPixmap(":/imagenes/fondo_espacio.jpg"));

    //planetas del sistema 1
    planeta1 = new cuerpo(0,-7000,2,0,70,1,10);
    planeta2 = new cuerpo(0,0,0,0,70000,2,15);
    planeta3 = new cuerpo(4000,5000,-1.6,1.2,70,1,10);

    planeta1aux = new cuerpo(1010,400,0,0,0,1,10);
    planeta3aux = new cuerpo(0,0,0,0,0,3,10);



    timer1 = new QTimer;
    connect(timer1,SIGNAL(timeout()),this,SLOT(mover1()));

    //planetas del sistema 2

    planet1 = new cuerpo(0,0,0,0,50000,2,15);
    planet2 = new cuerpo(-5000,0,0,-2,70,1,10);
    planet3 = new cuerpo(5000,0,0,2,70,1,10);
    planet4 = new cuerpo(0,-5000,2,0,70,1,10);
    planet5 = new cuerpo(0,5000,-2,0,70,1,10);

    planet2aux = new cuerpo(0,0,0,0,0,1,10);
    planet3aux = new cuerpo(0,0,0,0,0,3,10);
    planet4aux = new cuerpo(0,0,0,0,0,4,20);
    planet5aux = new cuerpo(0,0,0,0,0,5,17);

    timer2 = new QTimer;
    connect(timer2,SIGNAL(timeout()),this,SLOT(mover2()));


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_sistema1_clicked()
{
    timer2->stop();
    escena->removeItem(planet2aux);
    escena->removeItem(planet3aux);
    escena->removeItem(planet4aux);
    escena->removeItem(planet5aux);

    planeta2->setPos(planeta2->getPosx()/10+500,planeta2->getPosy()/20+350);
    escena->addItem(planeta2);
    timer1->start(15);

}

void MainWindow::mover1()
{
    escena->removeItem(planeta1aux);
    escena->removeItem(planeta3aux);
    //planeta 1
    double ax_planeta1; //aceleracion en x del planeta 1
    double ay_planeta1; //aceleracion en y del planeta 1
    double r12; //distancia del planeta 1 al 2
    double teta12; //angulo del planeta 1 al planeta 2
    double r13; //distancia del planeta 1 al 3
    double teta13; //angulo del planeta 1 al planeta 3

    //planeta 3
    double ax_planeta3; //aceleracion en x del planeta 3
    double ay_planeta3; //aceleracion en y del planeta 3
    double r32; //distancia del planeta 3 al 2
    double teta32; //angulo del planeta 3 al planeta 2
    double r31; //distancia del planeta 3 al 1
    double teta31; //angulo del planeta 3 al planeta 1


    /// aceleracion que siente el planeta 1 por parte del planeta 2 y 3.

    //actualizacion de la posicion planeta 1

    //calculo la distancia del planeta 1 al planeta 2
    r12= sqrt(pow(planeta2->getPosx()-planeta1->getPosx(),2) + pow(planeta2->getPosy()-planeta1->getPosy(),2));

    //calculo del angulo del planeta 1 con respecto al planeta 2
    teta12 = atan2(planeta2->getPosy()-planeta1->getPosy(),planeta2->getPosx()-planeta1->getPosx());

    //calculo la distancia del planeta 1 al planeta 3
    r13= sqrt(pow(planeta3->getPosx()-planeta1->getPosx(),2) + pow(planeta3->getPosy()-planeta1->getPosy(),2));

    //calculo del angulo del planeta 1 con respecto al planeta 2
    teta13 = atan2(planeta3->getPosy()-planeta1->getPosy(),planeta3->getPosx()-planeta1->getPosx());

    //calculo las aceleraciones del planeta 1 ejercido por el planeta 2
    ax_planeta1=(planeta2->getmasa())*pow(r12,-2)*cos(teta12)+(planeta3->getmasa())*pow(r13,-2)*cos(teta13);
    ay_planeta1=(planeta2->getmasa())*pow(r12,-2)*sin(teta12)+(planeta3->getmasa())*pow(r13,-2)*sin(teta13);

    planeta1->ActualizarPosicion(ax_planeta1,ay_planeta1);

    planeta1aux->setPos(planeta1->getPosx()/10+500,planeta1->getPosy()/20+350);
    escena->addItem(planeta1aux);

    //actualizacion de la posicion planeta 3

    //calculo la distancia del planeta 1 al planeta 2
    r32= sqrt(pow(planeta2->getPosx()-planeta3->getPosx(),2) + pow(planeta2->getPosy()-planeta3->getPosy(),2));

    //calculo del angulo del planeta 1 con respecto al planeta 2
    teta32 = atan2(planeta2->getPosy()-planeta3->getPosy(),planeta2->getPosx()-planeta3->getPosx());

    //calculo la distancia del planeta 1 al planeta 3
    r31= sqrt(pow(planeta1->getPosx()-planeta3->getPosx(),2) + pow(planeta1->getPosy()-planeta3->getPosy(),2));

    //calculo del angulo del planeta 1 con respecto al planeta 2
    teta31 = atan2(planeta1->getPosy()-planeta3->getPosy(),planeta1->getPosx()-planeta3->getPosx());

    //calculo las aceleraciones del planeta 1 ejercido por el planeta 2
    ax_planeta3=(planeta2->getmasa())*pow(r32,-2)*cos(teta32)+(planeta1->getmasa())*pow(r31,-2)*cos(teta31);
    ay_planeta3=(planeta2->getmasa())*pow(r32,-2)*sin(teta32)+(planeta1->getmasa())*pow(r31,-2)*sin(teta31);

    planeta3->ActualizarPosicion(ax_planeta3,ay_planeta3);

    planeta3aux->setPos(planeta3->getPosx()/10+500,planeta3->getPosy()/20+350);
    escena->addItem(planeta3aux);
}

void MainWindow::on_sistema2_clicked()
{
    timer1->stop();

    escena->removeItem(planeta1aux);
    escena->removeItem(planeta3aux);
    planet1->setPos(planet1->getPosx()/10+500,planet1->getPosy()/20+350);
    escena->addItem(planet1);
    timer2->start(15);
}

void MainWindow::mover2()
{
    escena->removeItem(planet2aux);
    escena->removeItem(planet3aux);
    escena->removeItem(planet4aux);
    escena->removeItem(planet5aux);
    //planet 2
    double ax_planet2; //aceleracion en x del planet 2
    double ay_planet2; //aceleracion en y del planet 2
    double r21; //distancia del planet 2 al 2
    double teta21; //angulo del planet 2 al planet 2
    double r23; //distancia del planet 2 al 3
    double teta23; //angulo del planet 2 al planet 3
    double r24; //distancia del planet 2 al 4
    double teta24; //angulo del planet 2 al planet 4
    double r25; //distancia del planet 2 al 5
    double teta25; //angulo del planet 2 al planet 5

    //planet 3
    double ax_planet3; //aceleracion en x del planet 3
    double ay_planet3; //aceleracion en y del planet 3
    double r31; //distancia del planet 3 al 1
    double teta31; //angulo del planet 3 al planet 1
    double r32; //distancia del planet 3 al 2
    double teta32; //angulo del planet 3 al planet 2
    double r34; //distancia del planet 3 al 4
    double teta34; //angulo del planet 3 al planet 4
    double r35; //distancia del planet 3 al 5
    double teta35; //angulo del planet 3 al planet 5

    //planet 4
    double ax_planet4; //aceleracion en x del planet 4
    double ay_planet4; //aceleracion en y del planet 4
    double r41; //distancia del planet 4 al 1
    double teta41; //angulo del planet 4 al planet 1
    double r42; //distancia del planet 4 al 2
    double teta42; //angulo del planet 4 al planet 2
    double r43; //distancia del planet 4 al 3
    double teta43; //angulo del planet 4 al planet 3
    double r45; //distancia del planet 4 al 5
    double teta45; //angulo del planet 4 al planet 5

    //planet 5
    double ax_planet5; //aceleracion en x del planet 5
    double ay_planet5; //aceleracion en y del planet 5
    double r51; //distancia del planet 5 al 1
    double teta51; //angulo del planet 5 al planet 1
    double r52; //distancia del planet 5 al 2
    double teta52; //angulo del planet 5 al planet 2
    double r53; //distancia del planet 5 al 3
    double teta53; //angulo del planet 5 al planet 3
    double r54; //distancia del planet 5 al 4
    double teta54; //angulo del planet 5 al planet 4


    //actualizacion de la posicion planet 2

    //calculo la distancia del planet 2 al planet 1
    r21= sqrt(pow(planet1->getPosx()-planet2->getPosx(),2) + pow(planet1->getPosy()-planet2->getPosy(),2));

    //calculo del angulo del planet 2 con respecto al planet 1
    teta21 = atan2(planet1->getPosy()-planet2->getPosy(),planet1->getPosx()-planet2->getPosx());

    //calculo la distancia del planet 2 al planet 3
    r23= sqrt(pow(planet3->getPosx()-planet2->getPosx(),2) + pow(planet3->getPosy()-planet2->getPosy(),2));

    //calculo del angulo del planet 2 con respecto al planet 3
    teta23 = atan2(planet3->getPosy()-planet2->getPosy(),planet3->getPosx()-planet2->getPosx());

    //calculo la distancia del planet 2 al planet 4
    r24= sqrt(pow(planet4->getPosx()-planet2->getPosx(),2) + pow(planet4->getPosy()-planet2->getPosy(),2));

    //calculo del angulo del planet 2 con respecto al planet 4
    teta24 = atan2(planet4->getPosy()-planet2->getPosy(),planet4->getPosx()-planet2->getPosx());

    //calculo la distancia del planet 2 al planet 5
    r25= sqrt(pow(planet5->getPosx()-planet2->getPosx(),2) + pow(planet5->getPosy()-planet2->getPosy(),2));

    //calculo del angulo del planet 2 con respecto al planet 5
    teta25 = atan2(planet5->getPosy()-planet2->getPosy(),planet5->getPosx()-planet2->getPosx());

    //calculo las aceleraciones del planet 2 ejercido por los planets 1, 3, 4 y 5
    ax_planet2=(planet1->getmasa())*pow(r21,-2)*cos(teta21) + (planet3->getmasa())*pow(r23,-2)*cos(teta23) + (planet4->getmasa())*pow(r24,-2)*cos(teta24) + (planet5->getmasa())*pow(r25,-2)*cos(teta25);
    ay_planet2=(planet1->getmasa())*pow(r21,-2)*sin(teta21) + (planet3->getmasa())*pow(r23,-2)*sin(teta23) + (planet4->getmasa())*pow(r24,-2)*sin(teta24) + (planet5->getmasa())*pow(r25,-2)*sin(teta25);

    planet2->ActualizarPosicion(ax_planet2,ay_planet2);

    planet2aux->setPos(planet2->getPosx()/10+500,planet2->getPosy()/20+350);
    escena->addItem(planet2aux);

    /// aceleracion que siente el planet 3 por parte del planet 1, 2, 4 y 5.

    //actualizacion de la posicion planet 3

    //calculo la distancia del planet 3 al planet 1
    r31= sqrt(pow(planet1->getPosx()-planet3->getPosx(),2) + pow(planet1->getPosy()-planet3->getPosy(),2));

    //calculo del angulo del planet 3 con respecto al planet 1
    teta31 = atan2(planet1->getPosy()-planet3->getPosy(),planet1->getPosx()-planet3->getPosx());

    //calculo la distancia del planet 3 al planet 2
    r32= sqrt(pow(planet2->getPosx()-planet3->getPosx(),2) + pow(planet2->getPosy()-planet3->getPosy(),2));

    //calculo del angulo del planet 3 con respecto al planet 2
    teta32 = atan2(planet2->getPosy()-planet3->getPosy(),planet2->getPosx()-planet3->getPosx());

    //calculo la distancia del planet 3 al planet 4
    r34= sqrt(pow(planet4->getPosx()-planet3->getPosx(),2) + pow(planet4->getPosy()-planet3->getPosy(),2));

    //calculo del angulo del planet 3 con respecto al planet 4
    teta34 = atan2(planet4->getPosy()-planet3->getPosy(),planet4->getPosx()-planet3->getPosx());

    //calculo la distancia del planet 3 al planet 5
    r35= sqrt(pow(planet5->getPosx()-planet3->getPosx(),2) + pow(planet5->getPosy()-planet3->getPosy(),2));

    //calculo del angulo del planet 3 con respecto al planet 5
    teta35 = atan2(planet5->getPosy()-planet3->getPosy(),planet5->getPosx()-planet3->getPosx());

    //calculo las aceleraciones del planet 3 ejercido por los planets 1, 2, 4 y 5
    ax_planet3=(planet1->getmasa())*pow(r31,-2)*cos(teta31) + (planet2->getmasa())*pow(r32,-2)*cos(teta32) + (planet4->getmasa())*pow(r34,-2)*cos(teta34) + (planet5->getmasa())*pow(r35,-2)*cos(teta35);
    ay_planet3=(planet1->getmasa())*pow(r31,-2)*sin(teta31) + (planet2->getmasa())*pow(r32,-2)*sin(teta32) + (planet4->getmasa())*pow(r34,-2)*sin(teta34) + (planet5->getmasa())*pow(r35,-2)*sin(teta35);

    planet3->ActualizarPosicion(ax_planet3,ay_planet3);

    planet3aux->setPos(planet3->getPosx()/10+500,planet3->getPosy()/20+350);
    escena->addItem(planet3aux);

    /// aceleracion que siente el planet 4 por parte del planet 1, 2, 3 y 5.

    //actualizacion de la posicion planet 4

    //calculo la distancia del planet 4 al planet 1
    r41= sqrt(pow(planet1->getPosx()-planet4->getPosx(),2) + pow(planet1->getPosy()-planet4->getPosy(),2));

    //calculo del angulo del planet 4 con respecto al planet 1
    teta41 = atan2(planet1->getPosy()-planet4->getPosy(),planet1->getPosx()-planet4->getPosx());

    //calculo la distancia del planet 4 al planet 2
    r42= sqrt(pow(planet2->getPosx()-planet4->getPosx(),2) + pow(planet2->getPosy()-planet4->getPosy(),2));

    //calculo del angulo del planet 4 con respecto al planet 2
    teta42 = atan2(planet2->getPosy()-planet4->getPosy(),planet2->getPosx()-planet4->getPosx());

    //calculo la distancia del planet 4 al planet 3
    r43= sqrt(pow(planet3->getPosx()-planet4->getPosx(),2) + pow(planet3->getPosy()-planet4->getPosy(),2));

    //calculo del angulo del planet 4 con respecto al planet 3
    teta43 = atan2(planet3->getPosy()-planet4->getPosy(),planet3->getPosx()-planet4->getPosx());

    //calculo la distancia del planet 4 al planet 5
    r45= sqrt(pow(planet5->getPosx()-planet4->getPosx(),2) + pow(planet5->getPosy()-planet4->getPosy(),2));

    //calculo del angulo del planet 4 con respecto al planet 5
    teta45 = atan2(planet5->getPosy()-planet4->getPosy(),planet5->getPosx()-planet4->getPosx());

    //calculo las aceleraciones del planet 4 ejercido por los planets 1, 2, 3 y 5
    ax_planet4=(planet1->getmasa())*pow(r41,-2)*cos(teta41) + (planet2->getmasa())*pow(r42,-2)*cos(teta42) + (planet4->getmasa())*pow(r43,-2)*cos(teta43) + (planet5->getmasa())*pow(r45,-2)*cos(teta45);
    ay_planet4=(planet1->getmasa())*pow(r41,-2)*sin(teta41) + (planet2->getmasa())*pow(r42,-2)*sin(teta42) + (planet4->getmasa())*pow(r43,-2)*sin(teta43) + (planet5->getmasa())*pow(r45,-2)*sin(teta45);

    planet4->ActualizarPosicion(ax_planet4,ay_planet4);

    planet4aux->setPos(planet4->getPosx()/10+500,planet4->getPosy()/20+350);
    escena->addItem(planet4aux);

    /// aceleracion que siente el planet 5 por parte del planet 1, 2, 3 y 4.

    //actualizacion de la posicion planet 5

    //calculo la distancia del planet 5 al planet 1
    r51= sqrt(pow(planet1->getPosx()-planet5->getPosx(),2) + pow(planet1->getPosy()-planet5->getPosy(),2));

    //calculo del angulo del planet 5 con respecto al planet 1
    teta51 = atan2(planet1->getPosy()-planet5->getPosy(),planet1->getPosx()-planet5->getPosx());

    //calculo la distancia del planet 5 al planet 2
    r52= sqrt(pow(planet2->getPosx()-planet5->getPosx(),2) + pow(planet2->getPosy()-planet5->getPosy(),2));

    //calculo del angulo del planet 5 con respecto al planet 2
    teta52 = atan2(planet2->getPosy()-planet5->getPosy(),planet2->getPosx()-planet5->getPosx());

    //calculo la distancia del planet 5 al planet 3
    r53= sqrt(pow(planet3->getPosx()-planet5->getPosx(),2) + pow(planet3->getPosy()-planet5->getPosy(),2));

    //calculo del angulo del planet 5 con respecto al planet 3
    teta53 = atan2(planet3->getPosy()-planet5->getPosy(),planet3->getPosx()-planet5->getPosx());

    //calculo la distancia del planet 5 al planet 4
    r54= sqrt(pow(planet4->getPosx()-planet5->getPosx(),2) + pow(planet4->getPosy()-planet5->getPosy(),2));

    //calculo del angulo del planet 5 con respecto al planet 4
    teta54 = atan2(planet4->getPosy()-planet5->getPosy(),planet4->getPosx()-planet5->getPosx());

    //calculo las aceleraciones del planet 4 ejercido por los planets 1, 2, 3 y 4
    ax_planet5=(planet1->getmasa())*pow(r51,-2)*cos(teta51) + (planet2->getmasa())*pow(r52,-2)*cos(teta52) + (planet4->getmasa())*pow(r53,-2)*cos(teta53) + (planet5->getmasa())*pow(r54,-2)*cos(teta54);
    ay_planet5=(planet1->getmasa())*pow(r51,-2)*sin(teta51) + (planet2->getmasa())*pow(r52,-2)*sin(teta52) + (planet4->getmasa())*pow(r53,-2)*sin(teta53) + (planet5->getmasa())*pow(r54,-2)*sin(teta54);

    planet5->ActualizarPosicion(ax_planet5,ay_planet5);

    planet5aux->setPos(planet5->getPosx()/10+500,planet5->getPosy()/20+350);
    escena->addItem(planet5aux);

}
