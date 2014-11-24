/********************************************************************************
** Form generated from reading UI file 'testtt.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTTT_H
#define UI_TESTTT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "cvwindow.h"

QT_BEGIN_NAMESPACE

class Ui_testttClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    CvWindow *widget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *testttClass)
    {
        if (testttClass->objectName().isEmpty())
            testttClass->setObjectName(QStringLiteral("testttClass"));
        testttClass->resize(712, 504);
        centralWidget = new QWidget(testttClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(580, 130, 75, 23));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(50, 40, 441, 351));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new CvWindow(frame);
        widget->setObjectName(QStringLiteral("widget"));

        horizontalLayout->addWidget(widget);

        testttClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(testttClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 712, 23));
        testttClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(testttClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        testttClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(testttClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        testttClass->setStatusBar(statusBar);

        retranslateUi(testttClass);

        QMetaObject::connectSlotsByName(testttClass);
    } // setupUi

    void retranslateUi(QMainWindow *testttClass)
    {
        testttClass->setWindowTitle(QApplication::translate("testttClass", "testtt", 0));
        pushButton->setText(QApplication::translate("testttClass", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class testttClass: public Ui_testttClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTTT_H
