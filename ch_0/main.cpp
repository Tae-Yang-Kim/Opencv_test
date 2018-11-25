#include <opencv2\opencv.hpp>
using namespace std;
using namespace cv;

int main() {
	Mat srcImage = imread("lena.jpg", IMREAD_GRAYSCALE);
	if (srcImage.empty()) {
		return -1;
	}
	imshow("srcImage", srcImage);
	waitKey();
	return 0;
}
