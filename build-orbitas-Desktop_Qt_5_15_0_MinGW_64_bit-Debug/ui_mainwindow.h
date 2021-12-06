/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QPushButton *sistema1;
    QLabel *label;
    QPushButton *sistema2;
    QLabel *tierra;
    QLabel *tierra_2;
    QLabel *tierra_3;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *tierra_4;
    QLabel *label_5;
    QLabel *tierra_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *tierra_6;
    QLabel *tierra_7;
    QLabel *label_8;
    QLabel *tierra_8;
    QLabel *label_9;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1300, 800);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(-10, 0, 1000, 700));
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        sistema1 = new QPushButton(centralwidget);
        sistema1->setObjectName(QString::fromUtf8("sistema1"));
        sistema1->setGeometry(QRect(1010, 60, 211, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial Black"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        sistema1->setFont(font);
        sistema1->setStyleSheet(QString::fromUtf8("background-image: url(:/imagenes/sistema1.jpg);\n"
""));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(990, 0, 311, 711));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        sistema2 = new QPushButton(centralwidget);
        sistema2->setObjectName(QString::fromUtf8("sistema2"));
        sistema2->setGeometry(QRect(1010, 320, 211, 51));
        sistema2->setStyleSheet(QString::fromUtf8("background-image: url(:/imagenes/sistema2.jpg);"));
        tierra = new QLabel(centralwidget);
        tierra->setObjectName(QString::fromUtf8("tierra"));
        tierra->setGeometry(QRect(1010, 150, 21, 21));
        tierra->setStyleSheet(QString::fromUtf8("background-image: url(:/imagenes/tierra.png);"));
        tierra_2 = new QLabel(centralwidget);
        tierra_2->setObjectName(QString::fromUtf8("tierra_2"));
        tierra_2->setGeometry(QRect(1010, 200, 21, 21));
        tierra_2->setStyleSheet(QString::fromUtf8("background-image: url(:/imagenes/marte.png);"));
        tierra_3 = new QLabel(centralwidget);
        tierra_3->setObjectName(QString::fromUtf8("tierra_3"));
        tierra_3->setGeometry(QRect(1005, 250, 31, 31));
        tierra_3->setStyleSheet(QString::fromUtf8("background-image: url(:/imagenes/sol.png);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(1040, 150, 71, 16));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(1040, 200, 71, 16));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(1040, 260, 71, 16));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        tierra_4 = new QLabel(centralwidget);
        tierra_4->setObjectName(QString::fromUtf8("tierra_4"));
        tierra_4->setGeometry(QRect(1005, 620, 31, 31));
        tierra_4->setStyleSheet(QString::fromUtf8("background-image: url(:/imagenes/sol.png);"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(1040, 630, 71, 16));
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        tierra_5 = new QLabel(centralwidget);
        tierra_5->setObjectName(QString::fromUtf8("tierra_5"));
        tierra_5->setGeometry(QRect(1010, 480, 21, 21));
        tierra_5->setStyleSheet(QString::fromUtf8("background-image: url(:/imagenes/marte.png);"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(1040, 430, 71, 16));
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(1040, 480, 71, 16));
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        tierra_6 = new QLabel(centralwidget);
        tierra_6->setObjectName(QString::fromUtf8("tierra_6"));
        tierra_6->setGeometry(QRect(1010, 430, 21, 21));
        tierra_6->setStyleSheet(QString::fromUtf8("background-image: url(:/imagenes/tierra.png);"));
        tierra_7 = new QLabel(centralwidget);
        tierra_7->setObjectName(QString::fromUtf8("tierra_7"));
        tierra_7->setGeometry(QRect(1000, 530, 36, 21));
        tierra_7->setStyleSheet(QString::fromUtf8("background-image: url(:/imagenes/saturno.png);"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(1040, 530, 71, 16));
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        tierra_8 = new QLabel(centralwidget);
        tierra_8->setObjectName(QString::fromUtf8("tierra_8"));
        tierra_8->setGeometry(QRect(1000, 570, 36, 31));
        tierra_8->setStyleSheet(QString::fromUtf8("background-image: url(:/imagenes/jupiter.png);"));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(1040, 580, 71, 16));
        label_9->setFont(font1);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        MainWindow->setCentralWidget(centralwidget);
        graphicsView->raise();
        label->raise();
        sistema1->raise();
        sistema2->raise();
        tierra->raise();
        tierra_2->raise();
        tierra_3->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        tierra_4->raise();
        label_5->raise();
        tierra_5->raise();
        label_6->raise();
        label_7->raise();
        tierra_6->raise();
        tierra_7->raise();
        label_8->raise();
        tierra_8->raise();
        label_9->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1300, 22));
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
#if QT_CONFIG(whatsthis)
        sistema1->setWhatsThis(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial Black'; font-size:14pt; font-weight:600; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/imagenes/sistema1.jpg\" /></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        sistema1->setText(QString());
        label->setText(QString());
#if QT_CONFIG(whatsthis)
        sistema2->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/imagenes/sistema2.jpg\"/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        sistema2->setText(QString());
#if QT_CONFIG(whatsthis)
        tierra->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/imagenes/tierra.png\"/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        tierra->setText(QString());
#if QT_CONFIG(whatsthis)
        tierra_2->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/imagenes/tierra.png\"/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        tierra_2->setText(QString());
#if QT_CONFIG(whatsthis)
        tierra_3->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/imagenes/tierra.png\"/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        tierra_3->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Tierra", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Marte", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Sol", nullptr));
#if QT_CONFIG(whatsthis)
        tierra_4->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/imagenes/tierra.png\"/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        tierra_4->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "Sol", nullptr));
#if QT_CONFIG(whatsthis)
        tierra_5->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/imagenes/tierra.png\"/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        tierra_5->setText(QString());
        label_6->setText(QCoreApplication::translate("MainWindow", "Tierra", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Marte", nullptr));
#if QT_CONFIG(whatsthis)
        tierra_6->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/imagenes/tierra.png\"/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        tierra_6->setText(QString());
#if QT_CONFIG(whatsthis)
        tierra_7->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/imagenes/tierra.png\"/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        tierra_7->setText(QString());
        label_8->setText(QCoreApplication::translate("MainWindow", "Saturno", nullptr));
#if QT_CONFIG(whatsthis)
        tierra_8->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p><img src=\":/imagenes/tierra.png\"/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        tierra_8->setText(QString());
        label_9->setText(QCoreApplication::translate("MainWindow", "Jupiter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
