#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include<opencv2/opencv.hpp>

int main(void){
    //drawing blank black space/windows.
    cv::Mat image=cv::Mat::zeros(500,500,CV_8UC3);

    //Drawig circle
    cv::Point center(100,100);
    cv::Scalar redColor(0,0,255);
    int radius=50;
    int circleThickness=-1;//-1 =>fill other=>thickness
/* cv::circle(
    InputOutputArray img,
    Point center,
    int radius,
    const Scalar& color,
    int thickness = 1,
    int lineType = LINE_8,
    int shift = 0
);*/

    cv::circle(image,center,radius,redColor,circleThickness,cv::LINE_AA);

    //drawing line
   // cv::line(InputOutputArray img, Point pt1, Point pt2, const Scalar &color)
    cv::line(image,cv::Point(0,0),cv::Point(100,100),cv::Scalar(255,0,0),20);

/* cv::line(
    InputOutputArray img,
    Point pt1,
    Point pt2,
    const Scalar& color,
    int thickness = 1,
    int lineType = LINE_8,
    int shift = 0
);
*/
    //drawing rectangle;
 //   cv::rectangle(InputOutputArray img, Point pt1, Point pt2, const Scalar &color)
 //   pt=> topleft and bottom left;
     cv::rectangle(image,cv::Point(100,100),cv::Point(200,200),cv::Scalar(0,255,0),-1);

//drawing triangle;
     cv::Point A(200,200);
     cv::Point B(300,200);
     cv::Point C(250,250);
     cv::line(image,A,B,redColor,2);
     cv::line(image,B,C,redColor,2);
     cv::line(image,C,A,redColor,2);
     cv::Point points[3] = {
         cv:: Point(100, 100),
    cv::Point(40, 100),
    cv::Point(250, 400)
};

//filling triangle;
cv::fillConvexPoly(
    image,
    points,
    3,
    cv::Scalar(30, 210, 255)
);

    cv::imshow("My own drawing",image);
    cv::waitKey(0);
    cv::destroyAllWindows();
    return 0;
}
