#pragma once
class Punkt
{
public:
	Punkt(const Punkt& p);
	Punkt(double x, double y);
	~Punkt();
	double getX();
	void setX(double x);
	void setY(double y);
	double getY();
private:
	double x;
	double y;
};

