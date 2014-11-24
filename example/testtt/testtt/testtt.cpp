#include "testtt.h"

testtt::testtt(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
//	ui.widget->show();
	cv::Mat img=cv::imread("lena.jpg");
	ui.widget->imshow(img);
}

testtt::~testtt()
{

}
