#ifndef __CASE_H__
#define __CASE_H__

#include <iostream>
#include "point.h"

class Case {
	public:
		Case() {}
		Case(const Point& p, int c, int e);
		int heuristique(const Point& c, const Point& g) const;
		void refineEstimation(const Point& end);
		bool operator<(const Case&) const;

	private:
		Point point;
		int cost;
		int estimation;

	friend std::vector<Point> algo (int**& tab, Point& start, Point& end, int sizeTab);
};

#endif
