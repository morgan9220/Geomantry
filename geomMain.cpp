#include <iostream>
#include "Point.hpp"
#include "LineSegment.hpp"

using namespace std;

int main()
{
	Point p3, p4;
	LineSegment linecheck1;

	double userXCoord1 = 0;
	double userYCoord1 = 0;
	double userXCoord2 = 0;
	double userYCoord2 = 0;

	cout << "Please enter your X coordindate of Point 1: " << endl;
	cin >> userXCoord1;
	p3.setXCoord(userXCoord1);

	cout << "Please enter your Y coordinate of Point 1: " << endl;
	cin >> userYCoord1;
	p3.setYCoord(userYCoord1);

	cout << "Please enter your X coordinate of Point 2: " << endl;
	cin >> userXCoord2;
	p4.setXCoord(userXCoord2);

	cout << "Please enter your Y coordinate of Point 2: " << endl;
	cin >> userYCoord2;
	p4.setYCoord(userYCoord2);

	cout << "Point 1: " << p3.getXCoord() << "," << p3.getYCoord() << endl;
	cout << "Point 2: " << p4.getXCoord() << "," << p4.getYCoord() << endl;

	Point p1(p3.getXCoord(), p3.getYCoord());
	Point p2(p4.getXCoord(), p4.getYCoord());
	double dist = p1.distanceTo(p2);

	cout << "The distance between Point 1 and Point 2 is: " << dist << endl;
	cout << "The length between endpoints is: " << linecheck1.length() << endl;

	return 0;
}