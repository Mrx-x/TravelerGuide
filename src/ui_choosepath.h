/********************************************************************************
** Form generated from reading UI file 'choosepath.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSEPATH_H
#define UI_CHOOSEPATH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChoosePath
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *ChoosePath)
    {
        if (ChoosePath->objectName().isEmpty())
            ChoosePath->setObjectName(QStringLiteral("ChoosePath"));
        ChoosePath->resize(400, 300);
        ChoosePath->setStyleSheet(QStringLiteral("background-color: rgb(57, 86, 100)"));
        pushButton = new QPushButton(ChoosePath);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(160, 160, 91, 31));
        pushButton->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"border-style: outset;\n"
" border-width: 5px; \n"
"border-color: rgb(130, 235, 255)"));
        pushButton_2 = new QPushButton(ChoosePath);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(120, 70, 171, 71));
        pushButton_2->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"border-style: outset;\n"
" border-width: 5px; \n"
"border-color: rgb(112, 255, 227);"));

        retranslateUi(ChoosePath);

        QMetaObject::connectSlotsByName(ChoosePath);
    } // setupUi

    void retranslateUi(QWidget *ChoosePath)
    {
        ChoosePath->setWindowTitle(QApplication::translate("ChoosePath", "ChoosePath", nullptr));
        pushButton->setText(QApplication::translate("ChoosePath", "&Ok", nullptr));
        pushButton_2->setText(QApplication::translate("ChoosePath", "\320\241\320\276\320\267\320\264\320\260\320\271\321\202\320\265 \320\270\320\274\321\217 \320\272\320\276\320\273\320\273\320\265\320\272\321\206\320\270\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChoosePath: public Ui_ChoosePath {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEPATH_H
