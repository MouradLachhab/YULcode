#include <assert.h>
#include <math.h>
#include "coord.h"

Coord::Coord(const Coord& Coord) : x(Coord.x), y(Coord.y) {}

Coord::Coord(int _x, int _y)  : x(_x), y(_y) {}

bool Coord::isNeighbour(const Coord& coord) const {
	if (this->x + 1 == coord.x && this->y == coord.y)
		return true;
	if (this->x - 1 == coord.x && this->y == coord.y)
		return true;
	if (this->x == coord.x && this->y + 1 == coord.y)
		return true;
	if (this->x == coord.x && this->y - 1 == coord.y)
		return true;
	return false;
}

bool Coord::operator==(const Coord& autre) const {
	return this->x == autre.x && this->y == autre.y;
}

bool Coord::operator<(const Coord& autre) const {
	if (this->x == autre.x)
		return this->y < autre.y;
	return this->x < autre.x;
}
