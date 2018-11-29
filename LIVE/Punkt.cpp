#include "stdafx.h"
#include "Punkt.h"


Punkt::Punkt(const Punkt& p)
{
	x = p.x;
	y = p.y;

}

Punkt::Punkt(double x, double y)
{
	this->x = x;
	this->y = y;
}



Punkt::~Punkt()
{
}

double Punkt::getX()
{
	return x;
}

double Punkt::getY()
{
	return y;
}

void Punkt::setX(double x)
{
	this->x = x;
}

void Punkt::setY(double y)
{
	this->y = y;
}
