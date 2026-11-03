

#include <opencv2/opencv.hpp>
#include <iostream>

int main()
{
    // Load image
    cv::Mat image = cv::imread(
        "/home/aayushchhuka/Learn_opencv/Phase1/Lession_1.2/input.png"
    );

    // Check image
    if (image.empty()) {
        std::cout << "Image not found!" << std::endl;
        return 1;
    }

    // Print image information
    std::cout << "Width: " << image.cols << std::endl;
    std::cout << "Height: " << image.rows << std::endl;
    std::cout << "Channels: " << image.channels() << std::endl;

    // Check pixel boundaries
    if (image.rows > 100 && image.cols > 100 &&
        image.channels() == 3)
    {
        // Access pixel at row 100, column 100
// cv::Vec3b& pixel = image.at<cv::Vec3b>(100, 100);

// // Print original pixel
// std::cout << "Before modification: "
//           << (int)pixel[0] << ", "
//           << (int)pixel[1] << ", "
//           << (int)pixel[2] << std::endl;

// // Change pixel to red
// pixel = cv::Vec3b(0, 0, 255);

// // Print modified pixel
//         std::cout << "After modification: "
//           << (int)pixel[0] << ", "
//           << (int)pixel[1] << ", "
//           << (int)pixel[2] << std::endl;
//     }


        for (int row = 100; row < 200; row++)
        {
            for (int col = 100; col < 200; col++)
            {
                image.at<cv::Vec3b>(row, col) = cv::Vec3b(0, 0, 255);
            }
        }
    }

    // Display modified image
    cv::imshow("Modified Image", image);

    // Wait for key press
    cv::waitKey(0);

    // Close windows
    cv::destroyAllWindows();

    cv::imwrite("output.png",image);

    return 0;
}
