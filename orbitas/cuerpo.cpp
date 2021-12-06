#include "cuerpo.h"

QRectF cuerpo::boundingRect() const
{
    return QRectF(-r,-r,2*r,2*r);
}

void cuerpo::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(-r,-r,*pixmap,0,0,2*r,2*r);
}

cuerpo::cuerpo()
{

}

cuerpo::cuerpo(double x, double y, double vx, double vy, double m, int imagen, int r_)
{
    r=r_;
    posx=x;
    posy=y;
    vel_x = vx;
    vel_y = vy;
    masa = m;
    setPos(posx,posy);
    if(imagen==1)
    {
        pixmap = new QPixmap(":/imagenes/tierra.png");
    }
    if(imagen==2)
    {
        pixmap = new QPixmap(":/imagenes/sol.png");
    }
    if(imagen==3)
    {
        pixmap = new QPixmap(":/imagenes/marte.png");
    }
    if(imagen==4)
    {
        pixmap = new QPixmap(":/imagenes/saturno.png");
    }
    if(imagen==5)
    {
        pixmap = new QPixmap(":/imagenes/jupiter.png");
    }
}

double cuerpo::getPosy()
{
    return posy;
}

void cuerpo::setPosx(double x)
{
    setX(x);
}

void cuerpo::setPosy(double y)
{
    setY(y);
}

double cuerpo::getPosx()
{
    return posx;
}

double cuerpo::getvelx()
{
    return vel_x;
}

double cuerpo::getvely()
{
    return vel_y;
}

double cuerpo::getmasa()
{
    return masa;
}

void cuerpo::ActualizarPosicion(double acel_x, double acel_y)
{
    vel_x = vel_x + acel_x*delta;
    vel_y = vel_y + acel_y*delta;
    posx= posx + vel_x*delta + (0.5)*acel_x*(delta*delta);
    posy= posy + vel_y*delta + (0.5)*acel_y*(delta*delta);
}

