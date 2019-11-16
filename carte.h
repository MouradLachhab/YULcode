#ifndef __CARTE_H__
#define __CARTE_H__

#include <vector>
#include <set>
#include <map>
#include "coord.h"
#include "case.h"
#include <iostream>

//using namespace std;

class Carte {
	public:
		Carte();
		std::vector<Coord> algo(int**& tab, Coord& start, Coord& end, int sizeTab);
		static const int longueur = 30;
		static const int hauteur = 20;
	private:
		int tableau[hauteur][longueur];

	friend class Visualizer;
	friend class Salle;
};

#endif
