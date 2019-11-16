#ifndef __CASE_H__
#define __CASE_H__

#include <iostream>
#include "point.h"

class Case {
	public:
		Case(Point p, int c, int e);
		int heuristique(Point c, Point g);
		void refineEstimation(Point end);

	private:
		Point point;
		int cost;
		int estimation;
};

#endif
