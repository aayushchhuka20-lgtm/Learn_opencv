#include "opencv2/core/hal/interface.h"
#include "opencv2/core/types.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include <opencv2/opencv.hpp>
int main(){

    
    cv::Mat bg(500,500,CV_8UC3,cv::Scalar(100,100,100));
    cv::Mat fg=bg.clone();

    cv::Point points[3] = {
        cv:: Point(100, 100),
        cv:: Point(400, 100),
        cv:: Point(250, 400)
    };

    cv::Mat blended;
    cv::Mat mask=cv::Mat::zeros(500,500,CV_8UC3);

    cv::fillConvexPoly(
            fg,
            points,
            3,
            cv::Scalar(0,0,255)
       );

    cv::fillConvexPoly(mask, points,3, cv::Scalar(255,255,255));

    cv::imshow("mask", mask);

    cv::waitKey(0);
    cv::imshow("fg", fg);
    cv::waitKey(0);

    cv::addWeighted(
        fg,
        0.3,
        bg,
        1-0.3,
        0,
        blended
            );
    cv::imshow("Before blended: ",blended);
    cv::imshow("Before bg: ",bg);
    cv::waitKey(0);
    blended.copyTo(bg,mask);
    cv::imshow("After: ",bg);
    cv::waitKey(0);
    return 0;
}
