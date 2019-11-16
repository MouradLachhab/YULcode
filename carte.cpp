#include "carte.h"

Carte::Carte()
{
	for ( int i = 0 ; i < hauteur ; ++i )
	{
		for ( int j = 0 ; j < longueur ; ++j )
		{
			tableau[i][j] = 0;
		}
	}
}