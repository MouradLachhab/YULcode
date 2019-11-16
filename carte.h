#ifndef __CARTE_H__
#define __CARTE_H__

#include <vector>
#include <set>
#include <map>
#include "coord.h"
#include "case.h"
#include <iostream>

class Carte {
	public:
		Carte();
		std::vector<Coord> algo(Coord& start, Coord& end);
		static const int longueur = 30;
		static const int hauteur = 20;
	private:
		int tableau[hauteur][longueur];

	friend class Visualizer;
	friend class Salle;
};

#endif
