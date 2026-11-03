//addWeighted(A, alpha, B, beta, gamma, result);

#include "opencv2/core.hpp"
#include "opencv2/highgui.hpp"
#include <opencv2/opencv.hpp>

int main(){

    cv::Mat bg(300,300,CV_8UC3,cv::Scalar(255,0,0));
    cv::Mat fg(300,300,CV_8UC3,cv::Scalar(0,0,255));

    cv::Mat result;
//addWeighted(A, alpha, B, beta, gamma, result);
    cv::addWeighted(fg, 0.5, bg, 1-0.5, 0, result);
    cv::imshow("Add Weight",result);
    cv::waitKey(0);
    cv::destroyAllWindows();
    return 0;

}
