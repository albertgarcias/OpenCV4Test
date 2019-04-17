#include <iostream>
#include <stdio.h>
#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;
int main() {
    std::cout << "Hello, World!" << std::endl;
    cout << "OpenCV version : " << CV_VERSION << endl;

    Mat mat = cv::imread("../Scara-TS80.jpg");
    cv::imshow("This is a test!",mat);
    cv::waitKey(0);

    return 0;
}