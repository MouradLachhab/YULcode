#ifndef __COORD_H__
#define __COORD_H__

#include <iostream>

class Coord {
	public:
		Coord(){}
		Coord(int x, int y);
		Coord(const Coord&);
		bool isNeighbour(const Coord&) const;
		bool operator==(const Coord&) const;
		bool operator<(const Coord&) const;

	private:
		int x;
		int y;

	friend class Case;
	friend class Employer;
	friend class Salle;
	friend class Carte;
};

#endif
