#ifndef __CARTE_H__
#define __CARTE_H__

#include <iostream>

//using namespace std;

class Carte {
	public:
		Carte();

		static const int longueur = 30;
		static const int hauteur = 20;
	private:
		int tableau[hauteur][longueur];

	friend class Visualizer;
	friend class Salle;
};

#endif
