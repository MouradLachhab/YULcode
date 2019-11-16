#include "case.h"
#include <math.h>

Case::Case(const Coord& p, int c, int e) : point(p), cost(c), estimation(e) {}

int Case::heuristique(const Coord& c, const Coord& g) const {
	return abs(c.x - g.x) + abs(c.y - g.y);
}

void Case::refineEstimation(const Coord& end) {
	this->estimation = this->cost + this->heuristique(this->point, end);
}

bool Case::operator<(const Case& c) const {
	return this->estimation < c.estimation;
}

bool Case::operator<=(const Case& c) const {
	return this->estimation <= c.estimation;
}
