#ifndef __POINT_H__
#define __POINT_H__

#include <iostream>

class Point {
	public:
		Point(){}
		Point(int x, int y);
		Point(const Point&);
		bool isNeighbour(const Point&) const;
		bool operator==(const Point&) const;
		bool operator<(const Point&) const;

	private:
		int x;
		int y;

	friend class Case;
	friend class Employer;
	friend class Salle;
	friend std::vector<Point> algo (int**& tab, Point& start, Point& end, int sizeTab);
};

#endif
