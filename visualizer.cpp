#include "visualizer.h"

Visualizer::Visualizer() {}

Visualizer::~Visualizer()
{
    if (carte != NULL)
        delete carte;
}

// Charger depuis une carte
void Visualizer::ChargerCarte(Carte newCarte)
{
    carte = new Mat(newCarte.hauteur* 10, newCarte.longueur*10, CV_8UC3, Scalar(100 ,100, 100));

    for (int i = 0; i < newCarte.hauteur; ++i)
    {
        for (int j = 0; j < newCarte.longueur; ++j)
        {
            if (newCarte.tableau[i][j])
            {
                Rect rect(j*10,i*10,10,10);
                rectangle(*carte, rect, Scalar(0, 0 ,0),  -1);
            }
        }
    }

    // TODO: Remove this Display
    namedWindow("Display Image", WINDOW_AUTOSIZE );
    imshow("Display Image", *carte);
    waitKey(0);
}
void Visualizer::AfficherChemin()
{
    
}