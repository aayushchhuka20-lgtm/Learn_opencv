#include <opencv2/opencv.hpp>
#include <iostream>
int main(void){

    cv::Vec3b bg(255,0,0);
    cv::Vec3b fg(0,0,255);

    float alpha=0.5;

    cv::Vec3b result;

    for(int i =0; i<3;i++){
        result[i]=alpha*fg[i]+(1-alpha)*bg[i];
    }
    std::cout <<"BGR: "
        <<(int)result[0]<<", "
        <<(int)result[1]<<", "
        <<(int)result[2]<<std::endl;

    return 0;
}
