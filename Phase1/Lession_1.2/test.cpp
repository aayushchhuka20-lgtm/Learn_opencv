#include <opencv2/opencv.hpp>
#include <iostream>
#include <filesystem>

int main() {
    std::string path = "/home/aayushchhuka/Learn_opencv/Phase1/Lession_1.2/input.png";

    std::cout << "File exists: "
              << std::filesystem::exists(path) << std::endl;

    std::cout << "File readable: "
              << std::filesystem::is_regular_file(path) << std::endl;

    std::cout << "File size: ";

    if (std::filesystem::exists(path)) {
        std::cout << std::filesystem::file_size(path) << " bytes\n";
    }

    cv::Mat image = cv::imread(path, cv::IMREAD_COLOR);

    std::cout << "Image empty: " << image.empty() << std::endl;

    if (!image.empty()) {
        std::cout << "Width: " << image.cols << std::endl;
        std::cout << "Height: " << image.rows << std::endl;
    }

    return 0;
}
