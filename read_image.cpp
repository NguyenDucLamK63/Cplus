#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;

int main(){
    Mat img = imread("/home/duclam/Documents/dataset_action/581/rgb/rgb_0003.png");
    imshow("window", img);
    waitKey(0);

    return 0;
}