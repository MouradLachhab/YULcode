#ifndef __CASE_H__
#define __CASE_H__

#include <iostream>
#include "coord.h"

class Case {
	public:
		Case() {}
		Case(const Coord& p, int c, int e);
		int heuristique(const Coord& c, const Coord& g) const;
		void refineEstimation(const Coord& end);
		bool operator<(const Case&) const;
		bool operator<=(const Case&) const;

	private:
		Coord point;
		int cost;
		int estimation;

	friend class Carte;
};

#endif
