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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
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
    QPushButton *pushButtonDelete;
    QPushButton *pushButtonAdd;
    QTableView *tableView;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButtonCity;
    QRadioButton *radioButtonCountry;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonSearch;
    QPushButton *pushButtonCancel;
    QWidget *layoutWidget1;
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
        MainWindow->resize(1043, 615);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(17, 41, 45);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(40, 70, 961, 461));
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
        pushButtonDelete = new QPushButton(page_2);
        pushButtonDelete->setObjectName(QStringLiteral("pushButtonDelete"));
        pushButtonDelete->setGeometry(QRect(160, 380, 131, 41));
        pushButtonDelete->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(14, 141, 125);"));
        pushButtonAdd = new QPushButton(page_2);
        pushButtonAdd->setObjectName(QStringLiteral("pushButtonAdd"));
        pushButtonAdd->setGeometry(QRect(10, 380, 131, 41));
        pushButtonAdd->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(14, 141, 125);"));
        tableView = new QTableView(page_2);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(9, 9, 961, 361));
        tableView->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        groupBox = new QGroupBox(page_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(600, 370, 361, 91));
        groupBox->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(12, 28, 331, 55));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        radioButtonCity = new QRadioButton(layoutWidget);
        radioButtonCity->setObjectName(QStringLiteral("radioButtonCity"));
        radioButtonCity->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        radioButtonCity->setChecked(true);

        verticalLayout_2->addWidget(radioButtonCity);

        radioButtonCountry = new QRadioButton(layoutWidget);
        radioButtonCountry->setObjectName(QStringLiteral("radioButtonCountry"));
        radioButtonCountry->setStyleSheet(QStringLiteral("color:rgb(255, 255, 255)"));

        verticalLayout_2->addWidget(radioButtonCountry);


        formLayout->setLayout(0, QFormLayout::LabelRole, verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(lineEdit);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButtonSearch = new QPushButton(layoutWidget);
        pushButtonSearch->setObjectName(QStringLiteral("pushButtonSearch"));
        pushButtonSearch->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(14, 141, 125);"));

        horizontalLayout_2->addWidget(pushButtonSearch);

        pushButtonCancel = new QPushButton(layoutWidget);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));
        pushButtonCancel->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(14, 141, 125);"));

        horizontalLayout_2->addWidget(pushButtonCancel);


        verticalLayout->addLayout(horizontalLayout_2);


        formLayout->setLayout(0, QFormLayout::FieldRole, verticalLayout);

        stackedWidget->addWidget(page_2);
        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(41, 11, 981, 51));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout->setContentsMargins(5, 0, 5, 0);
        buttonTrips = new QPushButton(layoutWidget1);
        buttonTrips->setObjectName(QStringLiteral("buttonTrips"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonTrips->sizePolicy().hasHeightForWidth());
        buttonTrips->setSizePolicy(sizePolicy1);
        buttonTrips->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(7, 142, 128);"));

        horizontalLayout->addWidget(buttonTrips);

        buttonListOfThings = new QPushButton(layoutWidget1);
        buttonListOfThings->setObjectName(QStringLiteral("buttonListOfThings"));
        sizePolicy1.setHeightForWidth(buttonListOfThings->sizePolicy().hasHeightForWidth());
        buttonListOfThings->setSizePolicy(sizePolicy1);
        buttonListOfThings->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(7, 142, 128);"));

        horizontalLayout->addWidget(buttonListOfThings);

        buttonTravelerCard = new QPushButton(layoutWidget1);
        buttonTravelerCard->setObjectName(QStringLiteral("buttonTravelerCard"));
        sizePolicy1.setHeightForWidth(buttonTravelerCard->sizePolicy().hasHeightForWidth());
        buttonTravelerCard->setSizePolicy(sizePolicy1);
        buttonTravelerCard->setMinimumSize(QSize(0, 21));
        buttonTravelerCard->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(7, 142, 128);"));

        horizontalLayout->addWidget(buttonTravelerCard);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1043, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        statusBar->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QString());
        pushButtonDelete->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        pushButtonAdd->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        radioButtonCity->setText(QApplication::translate("MainWindow", "\320\223\320\276\321\200\320\276\320\264", nullptr));
        radioButtonCountry->setText(QApplication::translate("MainWindow", "\320\241\321\202\321\200\320\260\320\275\320\260", nullptr));
        lineEdit->setText(QApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        pushButtonSearch->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270", nullptr));
        pushButtonCancel->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
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
