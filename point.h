#ifndef __POINT_H__
#define __POINT_H__

#include <iostream>

class Point {
	public:
		Point(){}
		Point(double x, double y);
		Point(const Point&);
		bool isNeighbour(const Point&) const;

	private:
		double x;
		double y;

	friend std::ostream& operator << (std::ostream&, const Point&);
	friend std::istream& operator >> (std::istream&, Point&);
	friend class Case;
	friend vector<Point> algo (Point start, Point end, int sizeTab);
};

#endif
