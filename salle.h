#ifndef __SALLE_H__
#define __SALLE_H__

#include "coord.h"
#include "carte.h"
//#include <iostream>
//#include <vector>

using namespace std;

class Salle {
	public:
		Salle(Coord _haut_gauche, Coord _bas_droite,vector<Coord>& _portes);
		void DessinerSalle(Carte&);
	private:
		Coord haut_gauche;
		Coord bas_droite;
		Coord centre;
		vector<Coord> portes;
		//void calculerCentre();
		
};

#endif
