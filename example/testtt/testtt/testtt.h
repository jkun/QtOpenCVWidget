#ifndef TESTTT_H
#define TESTTT_H

#include <QtWidgets/QMainWindow>
#include "ui_testtt.h"

class testtt : public QMainWindow
{
	Q_OBJECT

public:
	testtt(QWidget *parent = 0);
	~testtt();

private:
	Ui::testttClass ui;
};

#endif // TESTTT_H
