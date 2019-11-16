#ifndef __SALLE_H__
#define __SALLE_H__

#include "coord.h"
#include "carte.h"
#include <vector>

class Salle {
	public:
		Salle(Coord _haut_gauche, Coord _bas_droite,std::vector<Coord>& _portes);
		void DessinerSalle(Carte&);
		Coord centre;
	private:
		Coord haut_gauche;
		Coord bas_droite;
		
		std::vector<Coord> portes;
		//void calculerCentre();

};

#endif
