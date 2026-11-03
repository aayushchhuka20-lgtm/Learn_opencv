#include "opencv2/highgui.hpp"
#include <opencv2/opencv.hpp>
#include <iostream>

int main(void){
//500 = height (rows).
//500 = width (columns). 
//CV_8UC3 = 3 channels, each an 8-bit unsigned integer.
    cv::Mat image=cv::Mat::zeros(500,400,CV_8UC3);
    cv::imshow("My blank image",image);
    cv::waitKey(0);
    return 0;
}
