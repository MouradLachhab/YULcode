#include "plan.h"
#include "coord.h"
#include "carte.h"
#include "salle.h"

#include <vector>

using namespace std;

Plan::Plan()
{}

vector<Salle> Plan::DessinerPlan1(Carte& plan)
{
	vector<Coord> porteRdc;
	porteRdc.push_back(Coord(3,0));
	Salle rdc(Coord(0,0),Coord(Carte::longueur - 1,Carte::hauteur - 1),porteRdc);

	/* Création Open Space 1*/
	vector<Coord> porteOpenS_1;
	porteOpenS_1.push_back(Coord(9,6));
	Salle openSpace_1(Coord(6,0),Coord(12,6),porteOpenS_1);

	/* Création Open Space 2*/
	vector<Coord> porteOpenS_2;
	porteOpenS_2.push_back(Coord(15,6));
	Salle openSpace_2(Coord(12,0),Coord(18,6),porteOpenS_2);

	/* Création wc 1*/
	vector<Coord> porteWc_1;
	porteWc_1.push_back(Coord(24,2));
	Salle wc_1(Coord(24,0),Coord(29,4),porteWc_1);

	/* Création salle de Réunion*/
	vector<Coord> porteReunion;
	porteReunion.push_back(Coord(24,6));
	porteReunion.push_back(Coord(24,10));
	Salle salleReunion(Coord(24,4),Coord(29,15),porteReunion);

	/* Création Cuisine*/
	vector<Coord> porteCuisine;
	porteCuisine.push_back(Coord(20,15));
	porteCuisine.push_back(Coord(27,15));
	Salle cuisine(Coord(18,15),Coord(29,19),porteCuisine);

	/* Création Ascenseur*/
	vector<Coord> porteAsc;
	porteAsc.push_back(Coord(15,15));
	porteAsc.push_back(Coord(16,15));
	Salle ascenseur(Coord(13,15),Coord(18,19),porteAsc);

	/* Création salle Conférence*/
	vector<Coord> porteConf;
	porteConf.push_back(Coord(7,12));
	Salle salleConference(Coord(0,12),Coord(9,19),porteConf);

	/* Création wc 2*/
	vector<Coord> porteWc_2;
	porteWc_2.push_back(Coord(9,17));
	Salle wc_2(Coord(9,15),Coord(13,19),porteWc_2);

	/*Création poteau 1 */
	vector<Coord> portePoteau_1;
	Salle poteau_1(Coord(12,10),Coord(13,11),portePoteau_1);

	/*Création poteau 2 */
	vector<Coord> portePoteau_2;
	Salle poteau_2(Coord(18,10),Coord(19,11),portePoteau_2);


	rdc.DessinerSalle(plan);
	openSpace_1.DessinerSalle(plan);
	openSpace_2.DessinerSalle(plan);
	wc_1.DessinerSalle(plan);
	salleReunion.DessinerSalle(plan);
	cuisine.DessinerSalle(plan);
	ascenseur.DessinerSalle(plan);
	salleConference.DessinerSalle(plan);
	wc_2.DessinerSalle(plan);
	poteau_1.DessinerSalle(plan);
	poteau_2.DessinerSalle(plan);



	vector<Salle> listeSalle;
	listeSalle.push_back(rdc);
	listeSalle.push_back(openSpace_1);
	listeSalle.push_back(openSpace_2);
	listeSalle.push_back(wc_1);
	listeSalle.push_back(salleReunion);
	listeSalle.push_back(cuisine);
	listeSalle.push_back(ascenseur);
	listeSalle.push_back(salleConference);
	listeSalle.push_back(wc_2);
	//On ne peut pas aller aux poteaux

	return listeSalle;

}