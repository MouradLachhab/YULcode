#ifndef VISUALIZER_H
#define VISUALIZER_H

#include <opencv2/opencv.hpp>
#include "carte.h"

using namespace cv;

class Visualizer
{
    public:
        Visualizer();
        ~Visualizer();
        void ChargerCarte(Carte newCarte); 
        void AfficherChemin();

    private:
        Mat* carte;
};


#endif