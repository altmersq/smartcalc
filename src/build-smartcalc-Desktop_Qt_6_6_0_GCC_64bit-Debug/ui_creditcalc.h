/********************************************************************************
** Form generated from reading UI file 'creditcalc.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDITCALC_H
#define UI_CREDITCALC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_creditcalc
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QLabel *label_4;

    void setupUi(QWidget *creditcalc)
    {
        if (creditcalc->objectName().isEmpty())
            creditcalc->setObjectName("creditcalc");
        creditcalc->resize(834, 519);
        label = new QLabel(creditcalc);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 60, 81, 20));
        lineEdit = new QLineEdit(creditcalc);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(130, 60, 113, 21));
        label_2 = new QLabel(creditcalc);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 100, 81, 20));
        lineEdit_2 = new QLineEdit(creditcalc);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(130, 100, 113, 21));
        label_3 = new QLabel(creditcalc);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 140, 91, 21));
        lineEdit_3 = new QLineEdit(creditcalc);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(130, 140, 113, 21));
        comboBox = new QComboBox(creditcalc);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(250, 100, 81, 21));
        comboBox_2 = new QComboBox(creditcalc);
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(130, 180, 111, 25));
        label_4 = new QLabel(creditcalc);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 180, 81, 17));

        retranslateUi(creditcalc);

        QMetaObject::connectSlotsByName(creditcalc);
    } // setupUi

    void retranslateUi(QWidget *creditcalc)
    {
        creditcalc->setWindowTitle(QCoreApplication::translate("creditcalc", "Form", nullptr));
        label->setText(QCoreApplication::translate("creditcalc", "credit sum:", nullptr));
        label_2->setText(QCoreApplication::translate("creditcalc", "credit term:", nullptr));
        label_3->setText(QCoreApplication::translate("creditcalc", "interest rate:", nullptr));
        label_4->setText(QCoreApplication::translate("creditcalc", "credit type:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class creditcalc: public Ui_creditcalc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDITCALC_H
