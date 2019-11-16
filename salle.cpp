#include "salle.h"

Salle::Salle(Coord _haut_gauche, Coord _bas_droite, std::vector<Coord>& _portes)
: haut_gauche(_haut_gauche), bas_droite(_bas_droite), portes(_portes)
{
	centre.x = (haut_gauche.x + bas_droite.x ) / 2;
	centre.y = (haut_gauche.y + bas_droite.y ) / 2;
}

void Salle::DessinerSalle(Carte& carte)
{
	for (int i = haut_gauche.x ; i <= bas_droite.x ; i++ )
		carte.tableau[haut_gauche.y][i] = 1;

	for (int i = haut_gauche.x ; i <= bas_droite.x ; i++ )
		carte.tableau[bas_droite.y][i] = 1;

	for (int i = haut_gauche.y ; i <= bas_droite.y ; i++ )
		carte.tableau[i][haut_gauche.x] = 1;

	for (int i = haut_gauche.y ; i <= bas_droite.y ; i++ )
		carte.tableau[i][bas_droite.x] = 1;


	for ( int i = 0 ; i < portes.size() ; ++i )
	{
		int x = portes[i].x;
		int y = portes[i].y;

		carte.tableau[y][x] = 0;
	}
}