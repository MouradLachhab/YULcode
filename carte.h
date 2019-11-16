#ifndef __CARTE_H__
#define __CARTE_H__

#include <iostream>

//using namespace std;

class Carte {
	public:
		Carte();
	private:
		static const int longueur = 30;
		static const int largeur = 20;
		int tableau[longueur][largeur];

	friend class Salle;
};

#endif
