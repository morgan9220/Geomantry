#include <iostream>
#include "LineSegment.hpp"

LineSegment::LineSegment(Point p1, Point p2)
{
	setEnd1(p1);
	setEnd2(p2);
}

LineSegment::LineSegment()
{
	setEnd1(0);
	setEnd2(0);
}

void LineSegment::setEnd1(Point p1)
{
	p1.setXCoord();
	p1.setYCoord();
}

double LineSegment::getEnd1()
{
	return p1;
}

void LineSegment::setEnd2(Point p2)
{
	p2.setXCoord();
	p2.setYCoord();
}

double LineSegment::getEnd2()
{
	return p2;
}

double LineSegment::length()
{
	return p1.distanceTo(p2);
}

double LineSegment::slope()
{
	if (p2.getXCoord() - p1.getXCoord() == 0)
	{
		return -55555;
	}
	else
	{
		return(p2.getYCoord() - p1.getYCoord()) / (p2.getXCoord() - p1.getXCoord());
	}
}