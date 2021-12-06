#ifndef CUERPO_H
#define CUERPO_H
#include <math.h>
#include <QGraphicsItem>
#include <QPainter>
#include <string.h>

using namespace std;


class cuerpo: public QGraphicsItem
{
    double posy, posx, vel_x, vel_y;
    double delta = 5;
    int masa;
    int r;
    QPixmap *pixmap; //variable pixap
public:
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    cuerpo();
    cuerpo(double x, double y, double vx, double vy, double m, int imagen, int r_);
    double getPosy();
    void setPosx(double x);
    void setPosy(double y);
    double getPosx();
    double getvelx();
    double getvely();
    double getmasa();
    void ActualizarPosicion(double acel_x, double acel_y);
};

#endif // CUERPO_H

