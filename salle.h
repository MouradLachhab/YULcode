#ifndef __SALLE_H__
#define __SALLE_H__

#include "point.h"
#include "carte.h"
//#include <iostream>
//#include <vector>

using namespace std;

class Salle {
	public:
		Salle(Point _haut_gauche, Point _bas_droite,vector<Point>& _portes);
	private:
		Point haut_gauche;
		Point bas_droite;
		Point centre;
		vector<Point> portes;
		//void calculerCentre();
		void DessinerSalle(Carte&);
};

#endif
