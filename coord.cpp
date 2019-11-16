#include <assert.h>
#include <math.h>
#include "coord.h"

Coord::Coord(const Coord& Coord) : x(Coord.x), y(Coord.y) {}

Coord::Coord(int _x, int _y)  : x(_x), y(_y) {}

bool Coord::isNeighbour(const Coord& Coord) const {
	if (this->x + 1 == Coord.x && this->y == Coord.y)
		return true;
	if (this->x - 1 == Coord.x && this->y == Coord.y)
		return true;
	if (this->x == Coord.x && this->y + 1 == Coord.y)
		return true;
	if (this->x == Coord.x && this->y - 1 == Coord.y)
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
