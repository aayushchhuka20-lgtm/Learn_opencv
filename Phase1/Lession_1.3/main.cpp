#include <opencv2/opencv.hpp>
#include <iostream>

int main(){

    cv::Mat image=cv::imread("/home/aayushchhuka/Learn_opencv/Phase1/Lession_1.2/input.png");
    if(image.empty()){
        std::cout << "Image can not be open "<<std::endl;
        return 1;
    }
    int y=10;
    int x=30;

    //sometimes we there are padding while storing in Mat so we need image.step
    //image.data => start of pixel.
    unsigned char *p=image.data+y*image.step+x*image.channels();
    std::cout << "Blue: "<<(int)p[0]<<std::endl;
    std::cout << "Green: "<<(int)p[1]<<std::endl;
    std::cout << "Red: "<<(int)p[2]<<std::endl;
    return 0;
}
