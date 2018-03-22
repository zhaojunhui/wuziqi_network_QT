/********************************************************************************
** Form generated from reading UI file 'todialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TODIALOG_H
#define UI_TODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_toDialog
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *button2;
    QPushButton *button3;
    QPushButton *button4;
    QPushButton *button1;
    QPushButton *button5;
    QPushButton *button7;
    QPushButton *button8;
    QPushButton *button6;
    QPushButton *button9;
    QPushButton *button0;
    QPushButton *button_;
    QPushButton *OK_button;
    QPushButton *cancel_button;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *title;
    QLineEdit *lineEdit;

    void setupUi(QDialog *toDialog)
    {
        if (toDialog->objectName().isEmpty())
            toDialog->setObjectName(QStringLiteral("toDialog"));
        toDialog->resize(400, 275);
        gridLayoutWidget = new QWidget(toDialog);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 60, 343, 134));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        button2 = new QPushButton(gridLayoutWidget);
        button2->setObjectName(QStringLiteral("button2"));

        gridLayout->addWidget(button2, 0, 1, 1, 1);

        button3 = new QPushButton(gridLayoutWidget);
        button3->setObjectName(QStringLiteral("button3"));

        gridLayout->addWidget(button3, 0, 2, 1, 1);

        button4 = new QPushButton(gridLayoutWidget);
        button4->setObjectName(QStringLiteral("button4"));

        gridLayout->addWidget(button4, 1, 0, 1, 1);

        button1 = new QPushButton(gridLayoutWidget);
        button1->setObjectName(QStringLiteral("button1"));

        gridLayout->addWidget(button1, 0, 0, 1, 1);

        button5 = new QPushButton(gridLayoutWidget);
        button5->setObjectName(QStringLiteral("button5"));

        gridLayout->addWidget(button5, 1, 1, 1, 1);

        button7 = new QPushButton(gridLayoutWidget);
        button7->setObjectName(QStringLiteral("button7"));

        gridLayout->addWidget(button7, 2, 0, 1, 1);

        button8 = new QPushButton(gridLayoutWidget);
        button8->setObjectName(QStringLiteral("button8"));

        gridLayout->addWidget(button8, 2, 1, 1, 1);

        button6 = new QPushButton(gridLayoutWidget);
        button6->setObjectName(QStringLiteral("button6"));

        gridLayout->addWidget(button6, 1, 2, 1, 1);

        button9 = new QPushButton(gridLayoutWidget);
        button9->setObjectName(QStringLiteral("button9"));

        gridLayout->addWidget(button9, 2, 2, 1, 1);

        button0 = new QPushButton(gridLayoutWidget);
        button0->setObjectName(QStringLiteral("button0"));

        gridLayout->addWidget(button0, 3, 1, 1, 1);

        button_ = new QPushButton(gridLayoutWidget);
        button_->setObjectName(QStringLiteral("button_"));

        gridLayout->addWidget(button_, 3, 0, 1, 1);

        OK_button = new QPushButton(toDialog);
        OK_button->setObjectName(QStringLiteral("OK_button"));
        OK_button->setGeometry(QRect(30, 210, 113, 32));
        cancel_button = new QPushButton(toDialog);
        cancel_button->setObjectName(QStringLiteral("cancel_button"));
        cancel_button->setGeometry(QRect(260, 210, 113, 32));
        widget = new QWidget(toDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(50, 20, 281, 23));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        title = new QLabel(widget);
        title->setObjectName(QStringLiteral("title"));

        horizontalLayout->addWidget(title);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        retranslateUi(toDialog);

        QMetaObject::connectSlotsByName(toDialog);
    } // setupUi

    void retranslateUi(QDialog *toDialog)
    {
        toDialog->setWindowTitle(QApplication::translate("toDialog", "Dialog", 0));
        button2->setText(QApplication::translate("toDialog", "2", 0));
        button3->setText(QApplication::translate("toDialog", "3", 0));
        button4->setText(QApplication::translate("toDialog", "4", 0));
        button1->setText(QApplication::translate("toDialog", "1", 0));
        button5->setText(QApplication::translate("toDialog", "5", 0));
        button7->setText(QApplication::translate("toDialog", "7", 0));
        button8->setText(QApplication::translate("toDialog", "8", 0));
        button6->setText(QApplication::translate("toDialog", "6", 0));
        button9->setText(QApplication::translate("toDialog", "9", 0));
        button0->setText(QApplication::translate("toDialog", "0", 0));
        button_->setText(QApplication::translate("toDialog", ".", 0));
        OK_button->setText(QApplication::translate("toDialog", "OK", 0));
        cancel_button->setText(QApplication::translate("toDialog", "cancel", 0));
        title->setText(QApplication::translate("toDialog", "Host Ip:", 0));
    } // retranslateUi

};

namespace Ui {
    class toDialog: public Ui_toDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TODIALOG_H
