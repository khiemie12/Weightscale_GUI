/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_24;
    QLabel *label_29;
    QWidget *gridLayoutWidget;
    QGridLayout *UARTLAYOUT;
    QPushButton *btn_closeUart;
    QLabel *label_25;
    QComboBox *baudRateBox;
    QLabel *label_26;
    QComboBox *ComUart;
    QPushButton *btn_SetUart;
    QPushButton *btn_send;
    QLabel *label_23;
    QLabel *label_33;
    QLabel *label_34;
    QLCDNumber *lcdNumber;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QComboBox *dataBitsBox;
    QComboBox *parityBox;
    QComboBox *flowControlBox;
    QComboBox *stopBitsBox;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_30;
    QLabel *label_31;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_24 = new QLabel(centralwidget);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(960, 140, 251, 31));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label_24->setFont(font);
        label_29 = new QLabel(centralwidget);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(210, 10, 251, 31));
        label_29->setFont(font);
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(390, 100, 351, 104));
        UARTLAYOUT = new QGridLayout(gridLayoutWidget);
        UARTLAYOUT->setObjectName(QString::fromUtf8("UARTLAYOUT"));
        UARTLAYOUT->setContentsMargins(0, 0, 0, 0);
        btn_closeUart = new QPushButton(gridLayoutWidget);
        btn_closeUart->setObjectName(QString::fromUtf8("btn_closeUart"));

        UARTLAYOUT->addWidget(btn_closeUart, 1, 2, 1, 1);

        label_25 = new QLabel(gridLayoutWidget);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        label_25->setFont(font1);

        UARTLAYOUT->addWidget(label_25, 1, 0, 1, 1);

        baudRateBox = new QComboBox(gridLayoutWidget);
        baudRateBox->setObjectName(QString::fromUtf8("baudRateBox"));

        UARTLAYOUT->addWidget(baudRateBox, 1, 1, 1, 1);

        label_26 = new QLabel(gridLayoutWidget);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setFont(font1);

        UARTLAYOUT->addWidget(label_26, 0, 0, 1, 1);

        ComUart = new QComboBox(gridLayoutWidget);
        ComUart->setObjectName(QString::fromUtf8("ComUart"));

        UARTLAYOUT->addWidget(ComUart, 0, 1, 1, 1);

        btn_SetUart = new QPushButton(gridLayoutWidget);
        btn_SetUart->setObjectName(QString::fromUtf8("btn_SetUart"));

        UARTLAYOUT->addWidget(btn_SetUart, 0, 2, 1, 1);

        btn_send = new QPushButton(centralwidget);
        btn_send->setObjectName(QString::fromUtf8("btn_send"));
        btn_send->setGeometry(QRect(150, 110, 191, 41));
        btn_send->setFont(font1);
        label_23 = new QLabel(centralwidget);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(370, 80, 391, 341));
        label_23->setStyleSheet(QString::fromUtf8("border-width: 5px;\n"
"border-style:double;\n"
"border-color: black;\n"
"background-color:rgb(227,227,227);"));
        label_33 = new QLabel(centralwidget);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(60, 230, 301, 191));
        label_33->setStyleSheet(QString::fromUtf8("border-width: 5px;\n"
"border-style:double;\n"
"border-color: black;\n"
"background-color:rgb(227,227,227);"));
        label_34 = new QLabel(centralwidget);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(80, 300, 112, 29));
        label_34->setFont(font1);
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(210, 290, 91, 51));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(538, 220, 141, 159));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        dataBitsBox = new QComboBox(layoutWidget);
        dataBitsBox->setObjectName(QString::fromUtf8("dataBitsBox"));

        verticalLayout->addWidget(dataBitsBox);

        parityBox = new QComboBox(layoutWidget);
        parityBox->setObjectName(QString::fromUtf8("parityBox"));

        verticalLayout->addWidget(parityBox);

        flowControlBox = new QComboBox(layoutWidget);
        flowControlBox->setObjectName(QString::fromUtf8("flowControlBox"));

        verticalLayout->addWidget(flowControlBox);

        stopBitsBox = new QComboBox(layoutWidget);
        stopBitsBox->setObjectName(QString::fromUtf8("stopBitsBox"));

        verticalLayout->addWidget(stopBitsBox);

        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(390, 220, 141, 159));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_27 = new QLabel(layoutWidget_2);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setFont(font1);

        verticalLayout_2->addWidget(label_27);

        label_28 = new QLabel(layoutWidget_2);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setFont(font1);

        verticalLayout_2->addWidget(label_28);

        label_30 = new QLabel(layoutWidget_2);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setFont(font1);

        verticalLayout_2->addWidget(label_30);

        label_31 = new QLabel(layoutWidget_2);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setFont(font1);

        verticalLayout_2->addWidget(label_31);

        MainWindow->setCentralWidget(centralwidget);
        label_23->raise();
        label_24->raise();
        label_29->raise();
        gridLayoutWidget->raise();
        flowControlBox->raise();
        stopBitsBox->raise();
        parityBox->raise();
        dataBitsBox->raise();
        label_27->raise();
        label_28->raise();
        label_30->raise();
        label_31->raise();
        btn_send->raise();
        label_33->raise();
        label_34->raise();
        lcdNumber->raise();
        layoutWidget->raise();
        layoutWidget_2->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "UART COMMUNICATION", nullptr));
        label_29->setText(QCoreApplication::translate("MainWindow", "UART COMMUNICATION", nullptr));
        btn_closeUart->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "BaudRate", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "COM", nullptr));
        btn_SetUart->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        btn_send->setText(QCoreApplication::translate("MainWindow", "RUN", nullptr));
        label_23->setText(QString());
        label_33->setText(QString());
        label_34->setText(QCoreApplication::translate("MainWindow", "Weight:", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "DataBits", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "FlowControl", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "Parity", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "StopBits'", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
