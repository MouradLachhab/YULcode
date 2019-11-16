#include <assert.h>
#include <math.h>
#include "point.h"

Point::Point(const Point& point) : x(point.x), y(point.y) {}

Point::Point(int _x, int _y)  : x(_x), y(_y) {}

bool Point::isNeighbour(const Point& point) const {
	if (this->x + 1 == point.x && this->y == point.y)
		return true;
	if (this->x - 1 == point.x && this->y == point.y)
		return true;
	if (this->x == point.x && this->y + 1 == point.y)
		return true;
	if (this->x == point.x && this->y - 1 == point.y)
		return true;
	return false;
}

bool Point::operator==(const Point& autre) const {
	return this->x == autre.x && this->y == autre.y;
}

bool Point::operator<(const Point& autre) const {
	if (this->x == autre.x)
		return this->y < autre.y;
	return this->x < autre.x;
}
