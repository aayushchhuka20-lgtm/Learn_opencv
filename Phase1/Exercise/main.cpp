#include <opencv2/opencv.hpp>
#include <iostream>
#include <time.h>

using  namespace cv;
using namespace std;

int main(void){
    
    Mat original = imread("original.png");

    if(original.empty()){
        cout<<"Image is empty"<<endl;
        return 1;

    }
    int noOfTriangle = 6;

    Mat generated = original.clone();


    imshow("Triangles images",generated);
    waitKey(0);


    return 0;

}
