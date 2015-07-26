#ifndef POINT_HPP
#define POINT_HPP

class Point
{
private:
	double XCoord;
	double YCoord;
public:
	Point();
	Point(double xVal, double yVal);
	void setXCoord(double);
	double getXCoord();
	void setYCoord(double);
	double getYCoord();
	double distanceTo(const Point&);
};

#endif