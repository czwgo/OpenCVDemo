#include <opencv2/opencv.hpp>
#include "CVMethod.h"
#include <iostream>

using namespace cv;
using namespace std;

int main(int argc, char** argv) {
	Mat src = imread("E:/2020chen/code/lena.jpg"); //  B, G, R
	if (src.empty()) {
		printf("could not load image....\n");
		return -1;
	}
	// namedWindow("输入窗口", WINDOW_FREERATIO);
	imshow("输入窗口", src);

	CVMethod md;
	md.blur_demo(src);

	waitKey(0);
	destroyAllWindows();
	return 0;
}
