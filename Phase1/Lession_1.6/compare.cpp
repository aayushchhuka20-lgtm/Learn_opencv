#include "opencv2/core/matx.hpp"
#include <opencv2/opencv.hpp>
#include <iostream>

int main(void){

    cv::Mat original=cv::imread("original.png");
    cv::Mat generated=cv::imread("generated.png");

    if(original.empty() || generated.empty()){
        std::cout<<"Image are empty "<<std::endl;
        return 1;
    }
    if (original.type() != generated.type() || original.size()!= generated.size()){
        std::cout<<"Need same size and type"<<std::endl;
        return 1;
    }

    double totalError=0.0;
    for(int y = 0; y<original.rows;y++){

        for(int x =0 ; x<original.rows;x++){
            cv::Vec3b pixel1=original.at<cv::Vec3b>(y,x);
            cv::Vec3b pixel2=generated.at<cv::Vec3b>(y,x);
            for(int i=0;i<3;i++){
                int difference=(int)pixel1[i]-(int)pixel2[i];
                totalError+= difference * difference;

            }
        }
    }

    double totalVal=original.cols*original.rows * original.channels();
    double mse=totalError/totalVal;
    
    std::cout<<"SSD = "<<totalError<<std::endl;
    std::cout<<"MSE = "<<mse<<std::endl;

    return 0;
}
