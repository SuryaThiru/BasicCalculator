/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout_the_creator;
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLCDNumber *lcdNumber;
    QPushButton *pb_1;
    QPushButton *pb_3;
    QPushButton *pb_0;
    QPushButton *pb_6;
    QPushButton *pb_2;
    QPushButton *pb_7;
    QPushButton *pb_dot;
    QPushButton *pb_9;
    QPushButton *pb_8;
    QPushButton *pb_equal;
    QPushButton *pb_5;
    QPushButton *pb_div;
    QPushButton *pb_cross;
    QPushButton *pb_4;
    QPushButton *pb_minus;
    QPushButton *pb_plus;
    QSpacerItem *verticalSpacer;
    QPushButton *pb_C;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(340, 445);
        actionAbout_the_creator = new QAction(MainWindow);
        actionAbout_the_creator->setObjectName(QStringLiteral("actionAbout_the_creator"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 321, 392));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lcdNumber = new QLCDNumber(layoutWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lcdNumber->sizePolicy().hasHeightForWidth());
        lcdNumber->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lcdNumber, 0, 0, 1, 4);

        pb_1 = new QPushButton(layoutWidget);
        pb_1->setObjectName(QStringLiteral("pb_1"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pb_1->sizePolicy().hasHeightForWidth());
        pb_1->setSizePolicy(sizePolicy1);
        pb_1->setMinimumSize(QSize(55, 55));
        pb_1->setMaximumSize(QSize(55, 55));
        QFont font;
        font.setPointSize(12);
        pb_1->setFont(font);

        gridLayout->addWidget(pb_1, 2, 0, 1, 1);

        pb_3 = new QPushButton(layoutWidget);
        pb_3->setObjectName(QStringLiteral("pb_3"));
        sizePolicy1.setHeightForWidth(pb_3->sizePolicy().hasHeightForWidth());
        pb_3->setSizePolicy(sizePolicy1);
        pb_3->setMinimumSize(QSize(55, 55));
        pb_3->setMaximumSize(QSize(55, 55));
        pb_3->setFont(font);

        gridLayout->addWidget(pb_3, 2, 2, 1, 1);

        pb_0 = new QPushButton(layoutWidget);
        pb_0->setObjectName(QStringLiteral("pb_0"));
        sizePolicy1.setHeightForWidth(pb_0->sizePolicy().hasHeightForWidth());
        pb_0->setSizePolicy(sizePolicy1);
        pb_0->setMinimumSize(QSize(55, 55));
        pb_0->setMaximumSize(QSize(55, 55));
        pb_0->setFont(font);

        gridLayout->addWidget(pb_0, 5, 1, 1, 1);

        pb_6 = new QPushButton(layoutWidget);
        pb_6->setObjectName(QStringLiteral("pb_6"));
        sizePolicy1.setHeightForWidth(pb_6->sizePolicy().hasHeightForWidth());
        pb_6->setSizePolicy(sizePolicy1);
        pb_6->setMinimumSize(QSize(55, 55));
        pb_6->setMaximumSize(QSize(55, 55));
        pb_6->setFont(font);

        gridLayout->addWidget(pb_6, 3, 2, 1, 1);

        pb_2 = new QPushButton(layoutWidget);
        pb_2->setObjectName(QStringLiteral("pb_2"));
        sizePolicy1.setHeightForWidth(pb_2->sizePolicy().hasHeightForWidth());
        pb_2->setSizePolicy(sizePolicy1);
        pb_2->setMinimumSize(QSize(55, 55));
        pb_2->setMaximumSize(QSize(55, 55));
        pb_2->setFont(font);

        gridLayout->addWidget(pb_2, 2, 1, 1, 1);

        pb_7 = new QPushButton(layoutWidget);
        pb_7->setObjectName(QStringLiteral("pb_7"));
        sizePolicy1.setHeightForWidth(pb_7->sizePolicy().hasHeightForWidth());
        pb_7->setSizePolicy(sizePolicy1);
        pb_7->setMinimumSize(QSize(55, 55));
        pb_7->setMaximumSize(QSize(55, 55));
        pb_7->setFont(font);

        gridLayout->addWidget(pb_7, 4, 0, 1, 1);

        pb_dot = new QPushButton(layoutWidget);
        pb_dot->setObjectName(QStringLiteral("pb_dot"));
        sizePolicy1.setHeightForWidth(pb_dot->sizePolicy().hasHeightForWidth());
        pb_dot->setSizePolicy(sizePolicy1);
        pb_dot->setMinimumSize(QSize(55, 55));
        pb_dot->setMaximumSize(QSize(55, 55));
        pb_dot->setFont(font);

        gridLayout->addWidget(pb_dot, 5, 0, 1, 1);

        pb_9 = new QPushButton(layoutWidget);
        pb_9->setObjectName(QStringLiteral("pb_9"));
        sizePolicy1.setHeightForWidth(pb_9->sizePolicy().hasHeightForWidth());
        pb_9->setSizePolicy(sizePolicy1);
        pb_9->setMinimumSize(QSize(55, 55));
        pb_9->setMaximumSize(QSize(55, 55));
        pb_9->setFont(font);

        gridLayout->addWidget(pb_9, 4, 2, 1, 1);

        pb_8 = new QPushButton(layoutWidget);
        pb_8->setObjectName(QStringLiteral("pb_8"));
        sizePolicy1.setHeightForWidth(pb_8->sizePolicy().hasHeightForWidth());
        pb_8->setSizePolicy(sizePolicy1);
        pb_8->setMinimumSize(QSize(55, 55));
        pb_8->setMaximumSize(QSize(55, 55));
        pb_8->setFont(font);

        gridLayout->addWidget(pb_8, 4, 1, 1, 1);

        pb_equal = new QPushButton(layoutWidget);
        pb_equal->setObjectName(QStringLiteral("pb_equal"));
        sizePolicy1.setHeightForWidth(pb_equal->sizePolicy().hasHeightForWidth());
        pb_equal->setSizePolicy(sizePolicy1);
        pb_equal->setMinimumSize(QSize(55, 55));
        pb_equal->setMaximumSize(QSize(55, 55));
        pb_equal->setFont(font);

        gridLayout->addWidget(pb_equal, 5, 2, 1, 1);

        pb_5 = new QPushButton(layoutWidget);
        pb_5->setObjectName(QStringLiteral("pb_5"));
        sizePolicy1.setHeightForWidth(pb_5->sizePolicy().hasHeightForWidth());
        pb_5->setSizePolicy(sizePolicy1);
        pb_5->setMinimumSize(QSize(55, 55));
        pb_5->setMaximumSize(QSize(55, 55));
        pb_5->setFont(font);

        gridLayout->addWidget(pb_5, 3, 1, 1, 1);

        pb_div = new QPushButton(layoutWidget);
        pb_div->setObjectName(QStringLiteral("pb_div"));
        pb_div->setMinimumSize(QSize(55, 55));
        pb_div->setMaximumSize(QSize(55, 55));
        pb_div->setFont(font);

        gridLayout->addWidget(pb_div, 5, 3, 1, 1);

        pb_cross = new QPushButton(layoutWidget);
        pb_cross->setObjectName(QStringLiteral("pb_cross"));
        pb_cross->setMinimumSize(QSize(55, 55));
        pb_cross->setMaximumSize(QSize(55, 55));
        pb_cross->setFont(font);

        gridLayout->addWidget(pb_cross, 4, 3, 1, 1);

        pb_4 = new QPushButton(layoutWidget);
        pb_4->setObjectName(QStringLiteral("pb_4"));
        sizePolicy1.setHeightForWidth(pb_4->sizePolicy().hasHeightForWidth());
        pb_4->setSizePolicy(sizePolicy1);
        pb_4->setMinimumSize(QSize(55, 55));
        pb_4->setMaximumSize(QSize(55, 55));
        pb_4->setFont(font);

        gridLayout->addWidget(pb_4, 3, 0, 1, 1);

        pb_minus = new QPushButton(layoutWidget);
        pb_minus->setObjectName(QStringLiteral("pb_minus"));
        pb_minus->setMinimumSize(QSize(55, 55));
        pb_minus->setMaximumSize(QSize(55, 55));
        pb_minus->setFont(font);

        gridLayout->addWidget(pb_minus, 3, 3, 1, 1);

        pb_plus = new QPushButton(layoutWidget);
        pb_plus->setObjectName(QStringLiteral("pb_plus"));
        pb_plus->setMinimumSize(QSize(55, 55));
        pb_plus->setMaximumSize(QSize(55, 55));
        pb_plus->setFont(font);

        gridLayout->addWidget(pb_plus, 2, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 6, 2, 1, 1);

        pb_C = new QPushButton(layoutWidget);
        pb_C->setObjectName(QStringLiteral("pb_C"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pb_C->sizePolicy().hasHeightForWidth());
        pb_C->setSizePolicy(sizePolicy2);
        pb_C->setMinimumSize(QSize(0, 40));

        gridLayout->addWidget(pb_C, 7, 1, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 340, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionAbout_the_creator->setText(QApplication::translate("MainWindow", "About the creator", 0));
        pb_1->setText(QApplication::translate("MainWindow", "1", 0));
        pb_3->setText(QApplication::translate("MainWindow", "3", 0));
        pb_0->setText(QApplication::translate("MainWindow", "0", 0));
        pb_6->setText(QApplication::translate("MainWindow", "6", 0));
        pb_2->setText(QApplication::translate("MainWindow", "2", 0));
        pb_7->setText(QApplication::translate("MainWindow", "7", 0));
        pb_dot->setText(QApplication::translate("MainWindow", ".", 0));
        pb_9->setText(QApplication::translate("MainWindow", "9", 0));
        pb_8->setText(QApplication::translate("MainWindow", "8", 0));
        pb_equal->setText(QApplication::translate("MainWindow", "=", 0));
        pb_5->setText(QApplication::translate("MainWindow", "5", 0));
        pb_div->setText(QApplication::translate("MainWindow", "/", 0));
        pb_cross->setText(QApplication::translate("MainWindow", "x", 0));
        pb_4->setText(QApplication::translate("MainWindow", "4", 0));
        pb_minus->setText(QApplication::translate("MainWindow", "-", 0));
        pb_plus->setText(QApplication::translate("MainWindow", "+", 0));
        pb_C->setText(QApplication::translate("MainWindow", "C", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
