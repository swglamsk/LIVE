#include "stdafx.h"
#include "Prostokat.h"


Prostokat::Prostokat()
{
}

Prostokat::Prostokat(Punkt p1, Punkt p2)
{
	this->p1->setX(p1.getX());
	this->p1->setY(p1.getY());
	this->p2->setX(p2.getX());
	this->p2->setY(p2.getY());
}


Prostokat::~Prostokat()
{
}

Prostokat Prostokat::operator+(Prostokat & p1)
{	
	double xh, xs, yh, ys;
		xh = this->p1->getX();
		if (this->p2->getX() > xh) xh = this->p2->getX();
		if (p1.p1->getX() > xh) xh = p1.p1->getX();
		if (p1.p2->getX() > xh) xh = p1.p2->getX();

		xs = this->p1->getX();
		if (this->p2->getX() < xs) xs = this->p2->getX();
		if (p1.p1->getX() < xs) xs = p1.p1->getX();
		if (p1.p2->getX() < xs) xs = p1.p2->getX();

		yh = this->p1->getY();
		if (this->p2->getY() > yh) yh = this->p2->getY();
		if (p1.p1->getY() > yh) yh = p1.p1->getY();
		if (p1.p2->getY() > yh) yh = p1.p2->getY();

		ys = this->p1->getY();
		if (this->p2->getY() < ys) ys = this->p2->getY();
		if (p1.p1->getY() < ys) ys = p1.p1->getY();
		if (p1.p2->getY() < ys) ys = p1.p2->getY();

		Prostokat p2 = Prostokat(Punkt(xs, yh), Punkt(xh, ys));

		return p2;

}
