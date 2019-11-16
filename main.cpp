#include <stdio.h>

#include "visualizer.h"
#include <iostream>
#include <vector>

#include "coord.h"
#include "carte.h"
#include "salle.h"
#include "plan.h"

using namespace std;

int main(int argc, char** argv )
{
	Carte carte;

	vector<Salle> listeSalle = Plan::DessinerPlan1(carte);

	Visualizer v;

    v.ChargerCarte(carte);

	// for (int i = 0; i < listeSalle.size(); ++i)
	// 	cout << listeSalle[i].centre.x << " " << listeSalle[i].centre.y << endl;

	vector<Coord> vec = carte.algo(listeSalle[8].centre, listeSalle[6].centre);

    v.AfficherChemin(vec);
    // Initialiser la carte et les informations

    // Loop sur nos faux meetings

        // Creer une route

        // Afficher la route

        // ? Update en suivant l'employe

    return 0;
}
