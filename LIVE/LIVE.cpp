// LIVE.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Prostokat.h"
#include <iostream>
#include <string>


int main()
{
	Prostokat p1 = Prostokat(*new Punkt(1, 2), *new Punkt(5, 6));
	Prostokat p2 = Prostokat(*new Punkt(7,8), *new Punkt(11, 12));
	Prostokat p3;
	p3 = p1 + p2;
	p3.printPros();
	getchar();
}

