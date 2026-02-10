#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main() {
    Mat image = imread("photo.jpg");
    if (image.empty()) {
        cout << "无法读取图片！" << endl;
        return -1;
    }
    waitKey(0);
    Mat gray;
    cvtColor(image, gray, COLOR_BGR2GRAY);
    imwrite("gray.jpg", gray);
    cout << "OpenCV 运行成功！灰度图已保存为 gray.jpg" << endl;
    
    Mat binary;
    // threshold(输入, 输出, 阈值, 最大值, 阈值类型)
    // THRESH_BINARY + THRESH_OTSU 表示使用 Otsu 自动计算阈值
    double otsu_threshold = threshold(gray, binary, 0, 255, THRESH_BINARY + THRESH_OTSU);
    imwrite("binary.jpg", binary);
    cout << "二值图已保存为 binary.jpg" << endl;
    return 0;
}