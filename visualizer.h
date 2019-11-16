#ifndef VISUALIZER_H
#define VISUALIZER_H

#include "carte.h"

class Visualizer
{
    public:
        Visualizer();
        ~Visualizer();
        void ChargerCarte(Carte newCarte); 
        void AfficherChemin();

    private:
        cv::Mat* carte;
};


#endif