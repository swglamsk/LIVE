#include "stdafx.h"
#include "Prostokat.h"


Prostokat::Prostokat()
{
	p1 = new Punkt();
	p2 = new Punkt();
}

Prostokat::Prostokat(Punkt& a, Punkt& b)
{
	p1 = &a;
	p2 = &b;
}


Prostokat::~Prostokat()
{
}

void Prostokat::printPros()
{
	p1->printWsp();
	p2->printWsp();
}

Prostokat Prostokat::operator+(Prostokat  p1)
{	
	int xh, xs, yh, ys;
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


		return Prostokat(* new Punkt(xs, ys), * new Punkt(xh, yh));

}
