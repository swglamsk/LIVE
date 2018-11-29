#include "stdafx.h"
#include "Punkt.h"
#include <iostream>

Punkt::Punkt()
{
	x = new int;
	y = new int;
}
Punkt::Punkt(const Punkt& p)
{
	x = p.x;
	y = p.y;

}

Punkt::Punkt(int a, int b)
{
	x = new int(a);
	y = new int(b);
}



Punkt::~Punkt()
{
}

void Punkt::printWsp()
{
	std::cout << "(" << *x << "," << *y << ")" << std::endl;
}

int Punkt::getX()
{
	return *x;
}

int Punkt::getY()
{
	return *y;
}

