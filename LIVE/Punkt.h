#pragma once
class Punkt
{
public:
	Punkt();
	Punkt(const Punkt& p);
	Punkt(int x, int y);
	~Punkt();
	void printWsp();
	int getX();
	int getY();
private:
	int* x;
	int* y;
};

