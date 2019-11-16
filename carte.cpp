#include "carte.h"

Carte::Carte()
{
	for ( int i = 0 ; i < longueur ; ++i )
	{
		for ( int j = 0 ; j < largeur ; ++j )
		{
			tableau[i][j] = 0;
		}
	}
}