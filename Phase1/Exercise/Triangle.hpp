#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP


#include "opencv2/core/types.hpp"
#include <cstdint>
#include<opencv2/opencv.hpp>


class Triangle{

    cv::Point points[3];
    uint8_t blue,green,red;

    public:
        Triangle();
        void fillTriangle();
        void updateColor();
        void updatePoints(int n);
};

#endif
