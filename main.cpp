#include <stdio.h>
#include <opencv2/opencv.hpp>

#include "visualizer.h"
#include <iostream>
#include <vector>

#include "point.h"
#include "carte.h"
#include "salle.h"

using namespace cv;
using namespace std;

int main(int argc, char** argv )
{
	Carte carte();
	/* Création Rez-De-Chaussé*/
	vector<Point> porteRdc;
	porteRdc.insert(Point(0,3));
	Salle rdc(Point(0,0),Point(Carte::longueur,Carte::hauteur),porteRdc);

	/* Création Open Space 1*/
	vector<Point> porteOpenS_1;
	porteOpenS_1.insert(Point(0,3));
	Salle openSpace_1(Point(0,6),Point(6,12),porteOpenS_1);

	rdc.DessinerSalle(carte);
	openSpace_1.DessinerSalle(carte);
    // Initialiser la carte et les informations

    // Loop sur nos faux meetings

        // Creer une route

        // Afficher la route

        // ? Update en suivant l'employe

    return 0;
}
