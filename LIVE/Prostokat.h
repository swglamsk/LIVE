#pragma once
#include "Punkt.h"
class Prostokat
{
public:
	Prostokat();
	Prostokat(Punkt p1, Punkt p2);
	~Prostokat();
	Prostokat operator+(Prostokat& p1);
private:
	Punkt * p1;
	Punkt * p2;
};

