#include "testtt.h"
#include <QtWidgets/QApplication>
#include"cvwindow.h"
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	testtt w;
	w.show();
	
	return a.exec();
}
