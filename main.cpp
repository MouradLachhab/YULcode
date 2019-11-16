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

	Plan::DessinerPlan1(carte);

	Visualizer v;

    v.ChargerCarte(carte);

    v.AfficherChemin(vector<Coord>(0));
    // Initialiser la carte et les informations

    // Loop sur nos faux meetings

        // Creer une route

        // Afficher la route

        // ? Update en suivant l'employe

    return 0;
}
