#ifndef __POINT_H__
#define __POINT_H__

#include <iostream>

class Point {
	public:
		Point(){}
		Point(int x, int y);
		Point(const Point&);
		bool isNeighbour(const Point&) const;

	private:
		int x;
		int y;

	friend class Case;
	friend class Employer;
	friend class Salle;
	friend vector<Point> algo (Point start, Point end, int sizeTab);
};

#endif
