# include "case.h";
#include <math.h>

Case::Case(const Point& p, int c, int e) : point(p), cost(c), estimation(e) {}

int Case::heuristique(const Point& c, const Point& g) const {
	return abs(c.x - g.x) + abs(c.y - g.y);
}

void Case::refineEstimation(const Point& end) {
	this->estimation = this->cost + this->heuristique(this->point, end);
}

bool Case::operator<(const Case& c) const {
	return this->estimation < c.estimation;
}
