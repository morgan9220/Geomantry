#include <iostream>
#include <cmath>
#include "Point.hpp"

Point::Point()
{
	setXCoord(0);
	setYCoord(0);
}

Point::Point(double xVal, double yVal)
{
	setXCoord(xVal);
	setYCoord(yVal);
}

void Point::setXCoord(double xVal)
{
	XCoord = xVal;
}

void Point::setYCoord(double yVal)
{
	YCoord = yVal;
}

double Point::getXCoord()
{
	return XCoord;
}

double Point::getYCoord()
{
	return YCoord;
}

double Point::distanceTo(const Point &otherpoint)
{
	double xVal1,
		xVal2,
		yVal1,
		yVal2;
	double distanceX,
		distanceY,
		distanceSq,
		distance;
	xVal1 = XCoord;
	xVal2 = otherpoint.XCoord;
	yVal1 = YCoord;
	yVal2 = otherpoint.YCoord;
	distanceX = xVal1 - xVal2;
	distanceY = yVal1 - yVal2;
	distanceSq = pow(distanceX, 2) + pow(distanceY, 2);
	distance = sqrt(distanceSq);
	return distance;
}
