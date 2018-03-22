/********************************************************************************
** Form generated from reading UI file 'createdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEDIALOG_H
#define UI_CREATEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_createDialog
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *OK_button;
    QPushButton *cancel_button;

    void setupUi(QDialog *createDialog)
    {
        if (createDialog->objectName().isEmpty())
            createDialog->setObjectName(QStringLiteral("createDialog"));
        createDialog->resize(375, 125);
        label = new QLabel(createDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 30, 61, 21));
        lineEdit = new QLineEdit(createDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(120, 30, 201, 21));
        OK_button = new QPushButton(createDialog);
        OK_button->setObjectName(QStringLiteral("OK_button"));
        OK_button->setGeometry(QRect(40, 70, 113, 32));
        cancel_button = new QPushButton(createDialog);
        cancel_button->setObjectName(QStringLiteral("cancel_button"));
        cancel_button->setGeometry(QRect(220, 70, 113, 32));

        retranslateUi(createDialog);
        QObject::connect(OK_button, SIGNAL(clicked()), createDialog, SLOT(accept()));
        QObject::connect(cancel_button, SIGNAL(clicked()), createDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(createDialog);
    } // setupUi

    void retranslateUi(QDialog *createDialog)
    {
        createDialog->setWindowTitle(QApplication::translate("createDialog", "Dialog", 0));
        label->setText(QApplication::translate("createDialog", "Host Ip:", 0));
        OK_button->setText(QApplication::translate("createDialog", "OK", 0));
        cancel_button->setText(QApplication::translate("createDialog", "cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class createDialog: public Ui_createDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEDIALOG_H
