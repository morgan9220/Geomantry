#ifndef LINESEGMENT_HPP
#define LINESEGMENT_HPP

#include "Point.hpp"

class LineSegment
{
private:
	Point p1;
	Point p2;
public:
	LineSegment();
	LineSegment(Point, Point);
	void setEnd1(Point);
	Point getEnd1();
	void setEnd2(Point);
	Point getEnd2();
	double length();
	double slope();
};

#endif