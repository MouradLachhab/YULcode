#include "visualizer.h"
#include <opencv2/opencv.hpp>

using namespace cv;

Visualizer::Visualizer() {}

Visualizer::~Visualizer()
{
    if (carte)
        delete carte;
}

// Charger depuis une carte
void Visualizer::ChargerCarte(Carte newCarte)
{
    carte = new Mat(newCarte.hauteur, newCarte.longueur, CV_8UC3, Scalar(100 ,100, 100));

    for (int i = 0; i < newCarte.hauteur; ++i)
    {
        for (int j = 0; j < newCarte.longueur; ++j)
        {
            if (newCarte.tableau[i][j])
            {
                Rect rect(j,i,1,1);
                rectangle(*carte, rect, Scalar(255, 0 ,0),  -1);
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