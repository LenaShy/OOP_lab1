#include <iostream>
#include "Trngl.h"
#include "math.h"
#include "stdio.h"

using namespace std;

Trngl::Trngl()
{
   
}

void Trngl::CountOther()
{
	adjacentSide = oppositSide/tan(corner*M_PI/180);
    hypotenuse = oppositSide/sin(corner*M_PI/180);
}

void Trngl::IncreaseOppositSide(double percent)
{
	double v = oppositSide * percent / 100;
	oppositSide = oppositSide + v;
}

void Trngl::DecreaseOppositeSide(double percent)
{
	double b = percent / 100;
	double v = this->oppositSide * b;
	this->oppositSide -= v;
}

float Trngl::InsideRadius()
{
    return (adjacentSide + oppositSide - hypotenuse)/2;
}

double Trngl::InsideOutsideDifference()
{
    return sqrt(pow(InsideRadius(),2) + pow(adjacentSide - InsideRadius() - hypotenuse,2));
}

double Trngl::SquareRoot()
{
    return sqrt(adjacentSide*oppositSide/2);
}

double Trngl::ShowTriangleInfo(int i)
{
	switch(i)
	{
		case(0):
		{
			return adjacentSide;
		}
		case(1):
		{
			return oppositSide;
		}
		case(2):
		{
			return hypotenuse;
		}
		case(3):
		{
			return corner;
		}
	}


}

Trngl::~Trngl()
{
    //dtor
}
