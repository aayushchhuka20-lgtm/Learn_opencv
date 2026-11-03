#include <opencv2/opencv.hpp>
#include "Triangle.hpp"
#include <random>
int randomNumber(int n){
       static std::mt19937 generator(std::random_device{}());
       std::uniform_int_distribution<int> distribution(0,n);
       return distribution(generator);
}
   void Triangle::updatePoints(int n){
      points[0] = cv::Point(
               randomNumber(n),
               randomNumber(n)
               );

       points[1] = cv::Point(
               randomNumber(n),
               randomNumber(n)
               );

       points[2] = cv::Point(
               randomNumber(n),
               randomNumber(n)
               );
   }

void Triangle::fillTriangle(){
    
}
void Triangle::updateColor(){
    this->blue=randomNumber(255); 
    this->green=randomNumber(255); 
    this->red=randomNumber(255); 
    this->fillTriangle();
}

