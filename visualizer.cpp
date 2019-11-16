#include "visualizer.h"
#include <opencv2/opencv.hpp>

using namespace cv;

Visualizer::Visualizer() {}
Visualizer::~Visualizer() {}

void Visualizer::ChargerCarte()
{
    Mat image(500, 1000, CV_8UC3, Scalar(0 ,0, 0));

    Rect test(0,0,50,50);
    rectangle(image, test, Scalar(255, 0 ,0));
    namedWindow("Display Image", WINDOW_AUTOSIZE );
    imshow("Display Image", image);
    waitKey(0);
}
void Visualizer::AfficherChemin()
{
    
}