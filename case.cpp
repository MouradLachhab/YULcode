# include "case.h";
#include <math.h>

Case::Case(Point p, int c, int e) : point(p), cost(c), estimation(e) {}

int Case::heuristique(Point c, Point g) {
	return abs(c.x - g.x) + abs(c.y - g.y);
}

void Case::refineEstimation(Point end) {
	this->estimation = this->cost + this->heuristique(this->point, end);
}
