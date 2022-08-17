/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label;
    QWidget *page_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *buttonTrips;
    QPushButton *buttonListOfThings;
    QPushButton *buttonTravelerCard;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1038, 597);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(17, 41, 45);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(41, 78, 979, 442));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        label = new QLabel(page);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 10, 981, 431));
        label->setPixmap(QPixmap(QString::fromUtf8("../logo.jpg")));
        label->setScaledContents(true);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(41, 11, 981, 51));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout->setContentsMargins(5, 0, 5, 0);
        buttonTrips = new QPushButton(widget);
        buttonTrips->setObjectName(QStringLiteral("buttonTrips"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonTrips->sizePolicy().hasHeightForWidth());
        buttonTrips->setSizePolicy(sizePolicy);
        buttonTrips->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(7, 142, 128);"));

        horizontalLayout->addWidget(buttonTrips);

        buttonListOfThings = new QPushButton(widget);
        buttonListOfThings->setObjectName(QStringLiteral("buttonListOfThings"));
        sizePolicy.setHeightForWidth(buttonListOfThings->sizePolicy().hasHeightForWidth());
        buttonListOfThings->setSizePolicy(sizePolicy);
        buttonListOfThings->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(7, 142, 128);"));

        horizontalLayout->addWidget(buttonListOfThings);

        buttonTravelerCard = new QPushButton(widget);
        buttonTravelerCard->setObjectName(QStringLiteral("buttonTravelerCard"));
        sizePolicy.setHeightForWidth(buttonTravelerCard->sizePolicy().hasHeightForWidth());
        buttonTravelerCard->setSizePolicy(sizePolicy);
        buttonTravelerCard->setMinimumSize(QSize(0, 21));
        buttonTravelerCard->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(7, 142, 128);"));

        horizontalLayout->addWidget(buttonTravelerCard);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1038, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QString());
        buttonTrips->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\265\320\267\320\264\320\272\320\270", nullptr));
        buttonListOfThings->setText(QApplication::translate("MainWindow", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\262\320\265\321\211\320\265\320\271", nullptr));
        buttonTravelerCard->setText(QApplication::translate("MainWindow", "\320\232\320\260\321\200\321\202\320\276\321\207\320\272\320\260 \320\277\321\203\321\202\320\265\321\210\320\265\321\201\321\202\320\262\320\265\320\275\320\275\320\270\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
