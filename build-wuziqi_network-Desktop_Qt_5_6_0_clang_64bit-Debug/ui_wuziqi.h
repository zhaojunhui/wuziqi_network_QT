/********************************************************************************
** Form generated from reading UI file 'wuziqi.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WUZIQI_H
#define UI_WUZIQI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_wuziqi
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *state_of_connect;
    QLabel *state_of_turn;
    QPushButton *create_connect;
    QPushButton *stop_connect;
    QPushButton *to_connect;
    QPushButton *give_tip;
    QPushButton *quit_game;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *wuziqi)
    {
        if (wuziqi->objectName().isEmpty())
            wuziqi->setObjectName(QStringLiteral("wuziqi"));
        wuziqi->resize(349, 265);
        horizontalLayout_2 = new QHBoxLayout(wuziqi);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        state_of_connect = new QLabel(wuziqi);
        state_of_connect->setObjectName(QStringLiteral("state_of_connect"));

        verticalLayout->addWidget(state_of_connect);

        state_of_turn = new QLabel(wuziqi);
        state_of_turn->setObjectName(QStringLiteral("state_of_turn"));
        state_of_turn->setMaximumSize(QSize(16777215, 43));

        verticalLayout->addWidget(state_of_turn);

        create_connect = new QPushButton(wuziqi);
        create_connect->setObjectName(QStringLiteral("create_connect"));

        verticalLayout->addWidget(create_connect);

        stop_connect = new QPushButton(wuziqi);
        stop_connect->setObjectName(QStringLiteral("stop_connect"));

        verticalLayout->addWidget(stop_connect);

        to_connect = new QPushButton(wuziqi);
        to_connect->setObjectName(QStringLiteral("to_connect"));

        verticalLayout->addWidget(to_connect);

        give_tip = new QPushButton(wuziqi);
        give_tip->setObjectName(QStringLiteral("give_tip"));

        verticalLayout->addWidget(give_tip);

        quit_game = new QPushButton(wuziqi);
        quit_game->setObjectName(QStringLiteral("quit_game"));

        verticalLayout->addWidget(quit_game);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(wuziqi);

        QMetaObject::connectSlotsByName(wuziqi);
    } // setupUi

    void retranslateUi(QWidget *wuziqi)
    {
        wuziqi->setWindowTitle(QApplication::translate("wuziqi", "Form", 0));
        state_of_connect->setText(QApplication::translate("wuziqi", "TextLabel", 0));
        state_of_turn->setText(QApplication::translate("wuziqi", "TextLabel", 0));
        create_connect->setText(QApplication::translate("wuziqi", "\345\210\233\345\273\272\350\277\236\346\216\245", 0));
        stop_connect->setText(QApplication::translate("wuziqi", "\345\201\234\346\255\242\350\277\236\346\216\245", 0));
        to_connect->setText(QApplication::translate("wuziqi", "\345\212\240\345\205\245\350\277\236\346\216\245", 0));
        give_tip->setText(QApplication::translate("wuziqi", "\346\217\220\347\244\272", 0));
        quit_game->setText(QApplication::translate("wuziqi", "\351\200\200\345\207\272\346\270\270\346\210\217", 0));
    } // retranslateUi

};

namespace Ui {
    class wuziqi: public Ui_wuziqi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WUZIQI_H
