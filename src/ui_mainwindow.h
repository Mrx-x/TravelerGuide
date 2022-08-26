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
#include <QtWidgets/QGridLayout>
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
#include <QtWidgets/QTreeWidget>
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
    QRadioButton *radioButtonAll;
    QRadioButton *radioButtonCity;
    QRadioButton *radioButtonCountry;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonSearch;
    QPushButton *pushButtonCancel;
    QWidget *page_3;
    QTreeWidget *treeWidget;
    QPushButton *pbAddTreeWidgetItem;
    QPushButton *pbRemoteWidgetItem;
    QWidget *page_4;
    QLabel *lAboutMe;
    QLineEdit *leAboutMe;
    QLineEdit *leNotes;
    QLabel *lNotes;
    QLabel *lReferences;
    QLineEdit *leReferences;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QPushButton *pbAddPassport;
    QPushButton *pbAddTicket;
    QPushButton *pbViewPassport;
    QPushButton *pbViewTicket;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QLabel *profileLogo;
    QPushButton *pbAddPhoto;
    QPushButton *pbSaveCard;
    QLabel *lCardTreveler;
    QPushButton *pbLoadCard;
    QWidget *layoutWidget2;
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
        MainWindow->resize(1043, 629);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(17, 41, 45);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(40, 70, 961, 481));
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
        pushButtonDelete->setGeometry(QRect(160, 370, 131, 41));
        pushButtonDelete->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(14, 141, 125);"));
        pushButtonAdd = new QPushButton(page_2);
        pushButtonAdd->setObjectName(QStringLiteral("pushButtonAdd"));
        pushButtonAdd->setGeometry(QRect(10, 370, 131, 41));
        pushButtonAdd->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(14, 141, 125);"));
        tableView = new QTableView(page_2);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(9, 9, 961, 351));
        tableView->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        groupBox = new QGroupBox(page_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(600, 360, 361, 111));
        groupBox->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(12, 28, 331, 73));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        radioButtonAll = new QRadioButton(layoutWidget);
        radioButtonAll->setObjectName(QStringLiteral("radioButtonAll"));
        radioButtonAll->setChecked(true);

        verticalLayout_2->addWidget(radioButtonAll);

        radioButtonCity = new QRadioButton(layoutWidget);
        radioButtonCity->setObjectName(QStringLiteral("radioButtonCity"));
        radioButtonCity->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        radioButtonCity->setChecked(false);

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
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        treeWidget = new QTreeWidget(page_3);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setGeometry(QRect(10, 40, 951, 361));
        treeWidget->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255)"));
        pbAddTreeWidgetItem = new QPushButton(page_3);
        pbAddTreeWidgetItem->setObjectName(QStringLiteral("pbAddTreeWidgetItem"));
        pbAddTreeWidgetItem->setGeometry(QRect(10, 410, 151, 51));
        pbAddTreeWidgetItem->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(7, 142, 128);"));
        pbRemoteWidgetItem = new QPushButton(page_3);
        pbRemoteWidgetItem->setObjectName(QStringLiteral("pbRemoteWidgetItem"));
        pbRemoteWidgetItem->setGeometry(QRect(170, 410, 151, 51));
        pbRemoteWidgetItem->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(7, 142, 128);"));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        lAboutMe = new QLabel(page_4);
        lAboutMe->setObjectName(QStringLiteral("lAboutMe"));
        lAboutMe->setGeometry(QRect(170, 10, 71, 21));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(11);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        lAboutMe->setFont(font);
        lAboutMe->setStyleSheet(QLatin1String("color: white;\n"
"border-style: solid;\n"
" border-width: 1px; \n"
"border-color: rgb(7, 142, 128);"));
        lAboutMe->setAlignment(Qt::AlignCenter);
        leAboutMe = new QLineEdit(page_4);
        leAboutMe->setObjectName(QStringLiteral("leAboutMe"));
        leAboutMe->setGeometry(QRect(170, 30, 741, 81));
        QFont font1;
        font1.setPointSize(9);
        leAboutMe->setFont(font1);
        leAboutMe->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"\n"
"border-style: solid;\n"
" border-width: 3px; \n"
"border-color: rgb(7, 142, 128);"));
        leAboutMe->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        leNotes = new QLineEdit(page_4);
        leNotes->setObjectName(QStringLiteral("leNotes"));
        leNotes->setGeometry(QRect(170, 150, 311, 61));
        leNotes->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"\n"
"border-style: solid;\n"
" border-width: 3px; \n"
"border-color: rgb(7, 142, 128);"));
        leNotes->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lNotes = new QLabel(page_4);
        lNotes->setObjectName(QStringLiteral("lNotes"));
        lNotes->setGeometry(QRect(170, 130, 81, 21));
        QFont font2;
        font2.setFamily(QStringLiteral("Times New Roman"));
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        lNotes->setFont(font2);
        lNotes->setStyleSheet(QLatin1String("color: white;\n"
"border-style: solid;\n"
" border-width: 1px; \n"
"border-color: rgb(7, 142, 128);"));
        lNotes->setAlignment(Qt::AlignCenter);
        lReferences = new QLabel(page_4);
        lReferences->setObjectName(QStringLiteral("lReferences"));
        lReferences->setGeometry(QRect(530, 130, 81, 21));
        lReferences->setFont(font2);
        lReferences->setStyleSheet(QLatin1String("color: white;\n"
"border-style: solid;\n"
" border-width: 1px; \n"
"border-color: rgb(7, 142, 128);"));
        lReferences->setAlignment(Qt::AlignCenter);
        leReferences = new QLineEdit(page_4);
        leReferences->setObjectName(QStringLiteral("leReferences"));
        leReferences->setGeometry(QRect(530, 150, 381, 61));
        leReferences->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"\n"
"border-style: solid;\n"
" border-width: 3px; \n"
"border-color: rgb(7, 142, 128);"));
        leReferences->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        groupBox_2 = new QGroupBox(page_4);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 270, 311, 131));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pbAddPassport = new QPushButton(groupBox_2);
        pbAddPassport->setObjectName(QStringLiteral("pbAddPassport"));
        pbAddPassport->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(7, 142, 128);"));

        gridLayout->addWidget(pbAddPassport, 0, 0, 1, 1);

        pbAddTicket = new QPushButton(groupBox_2);
        pbAddTicket->setObjectName(QStringLiteral("pbAddTicket"));
        pbAddTicket->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(7, 142, 128);\n"
"\n"
""));

        gridLayout->addWidget(pbAddTicket, 0, 1, 1, 1);

        pbViewPassport = new QPushButton(groupBox_2);
        pbViewPassport->setObjectName(QStringLiteral("pbViewPassport"));
        pbViewPassport->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(7, 142, 128);"));

        gridLayout->addWidget(pbViewPassport, 1, 0, 1, 1);

        pbViewTicket = new QPushButton(groupBox_2);
        pbViewTicket->setObjectName(QStringLiteral("pbViewTicket"));
        pbViewTicket->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(7, 142, 128);"));

        gridLayout->addWidget(pbViewTicket, 1, 1, 1, 1);

        layoutWidget1 = new QWidget(page_4);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 10, 161, 201));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        profileLogo = new QLabel(layoutWidget1);
        profileLogo->setObjectName(QStringLiteral("profileLogo"));
        profileLogo->setPixmap(QPixmap(QString::fromUtf8("../user.png")));
        profileLogo->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(profileLogo);

        pbAddPhoto = new QPushButton(layoutWidget1);
        pbAddPhoto->setObjectName(QStringLiteral("pbAddPhoto"));
        pbAddPhoto->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(7, 142, 128);"));

        verticalLayout_3->addWidget(pbAddPhoto);

        pbSaveCard = new QPushButton(page_4);
        pbSaveCard->setObjectName(QStringLiteral("pbSaveCard"));
        pbSaveCard->setGeometry(QRect(690, 420, 121, 41));
        pbSaveCard->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(7, 142, 128);"));
        lCardTreveler = new QLabel(page_4);
        lCardTreveler->setObjectName(QStringLiteral("lCardTreveler"));
        lCardTreveler->setGeometry(QRect(690, 360, 271, 41));
        lCardTreveler->setFont(font2);
        lCardTreveler->setStyleSheet(QLatin1String("border-style: solid;\n"
" border-width: 3px; \n"
"border-color: rgb(7, 142, 128);"));
        lCardTreveler->setAlignment(Qt::AlignCenter);
        pbLoadCard = new QPushButton(page_4);
        pbLoadCard->setObjectName(QStringLiteral("pbLoadCard"));
        pbLoadCard->setGeometry(QRect(840, 420, 121, 41));
        pbLoadCard->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(7, 142, 128);"));
        stackedWidget->addWidget(page_4);
        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(41, 11, 981, 51));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout->setContentsMargins(5, 0, 5, 0);
        buttonTrips = new QPushButton(layoutWidget2);
        buttonTrips->setObjectName(QStringLiteral("buttonTrips"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonTrips->sizePolicy().hasHeightForWidth());
        buttonTrips->setSizePolicy(sizePolicy1);
        buttonTrips->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(7, 142, 128);"));

        horizontalLayout->addWidget(buttonTrips);

        buttonListOfThings = new QPushButton(layoutWidget2);
        buttonListOfThings->setObjectName(QStringLiteral("buttonListOfThings"));
        sizePolicy1.setHeightForWidth(buttonListOfThings->sizePolicy().hasHeightForWidth());
        buttonListOfThings->setSizePolicy(sizePolicy1);
        buttonListOfThings->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(7, 142, 128);"));

        horizontalLayout->addWidget(buttonListOfThings);

        buttonTravelerCard = new QPushButton(layoutWidget2);
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

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QString());
        pushButtonDelete->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        pushButtonAdd->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        radioButtonAll->setText(QApplication::translate("MainWindow", "\320\222\320\265\320\267\320\264\320\265", nullptr));
        radioButtonCity->setText(QApplication::translate("MainWindow", "\320\223\320\276\321\200\320\276\320\264", nullptr));
        radioButtonCountry->setText(QApplication::translate("MainWindow", "\320\241\321\202\321\200\320\260\320\275\320\260", nullptr));
        lineEdit->setText(QApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        pushButtonSearch->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270", nullptr));
        pushButtonCancel->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        pbAddTreeWidgetItem->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pbRemoteWidgetItem->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        lAboutMe->setText(QApplication::translate("MainWindow", "\320\236 \321\201\320\265\320\261\320\265", nullptr));
        lNotes->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\274\320\265\321\202\320\272\320\270", nullptr));
        lReferences->setText(QApplication::translate("MainWindow", "\320\241\321\201\321\213\320\273\320\272\320\270", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\272\320\260 \321\204\320\260\320\271\320\273\320\276\320\262", nullptr));
        pbAddPassport->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\204\320\276\321\202\320\276 \320\277\320\260\321\201\320\277\320\276\321\200\321\202\320\260", nullptr));
        pbAddTicket->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\204\320\276\321\202\320\276 \320\261\320\270\320\273\320\265\321\202\320\260", nullptr));
        pbViewPassport->setText(QApplication::translate("MainWindow", "\320\237\320\276\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214", nullptr));
        pbViewTicket->setText(QApplication::translate("MainWindow", "\320\237\320\276\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214", nullptr));
        profileLogo->setText(QString());
        pbAddPhoto->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\204\320\276\321\202\320\276", nullptr));
        pbSaveCard->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 ", nullptr));
        lCardTreveler->setText(QApplication::translate("MainWindow", " \320\232\320\260\321\200\321\202\320\276\321\207\320\272\320\260 \320\277\321\203\321\202\320\265\321\210\320\265\321\201\321\202\320\262\320\265\320\275\320\275\320\270\320\272\320\260 ", nullptr));
        pbLoadCard->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214", nullptr));
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
