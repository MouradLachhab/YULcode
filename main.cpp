#include <stdio.h>
#include <opencv2/opencv.hpp>

#include "visualizer.h"
#include <iostream>
#include <vector>

#include "coord.h"
#include "carte.h"
#include "salle.h"

using namespace std;

int main(int argc, char** argv )
{
	Carte carte;
    Visualizer v;
	/* Création Rez-De-Chaussé*/
	vector<Coord> porteRdc;
	porteRdc.push_back(Coord(3,0));
	Salle rdc(Coord(0,0),Coord(Carte::longueur - 1,Carte::hauteur - 1),porteRdc);

	/* Création Open Space 1*/
	vector<Coord> porteOpenS_1;
	porteOpenS_1.push_back(Coord(9,6));
	Salle openSpace_1(Coord(6,0),Coord(12,6),porteOpenS_1);

	rdc.DessinerSalle(carte);
	openSpace_1.DessinerSalle(carte);
    v.ChargerCarte(carte);
    // Initialiser la carte et les informations

    // Loop sur nos faux meetings

        // Creer une route

        // Afficher la route

        // ? Update en suivant l'employe

    return 0;
}
