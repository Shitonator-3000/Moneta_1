/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sun 23. Jun 16:21:30 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_messageBob;
    QLineEdit *lineEdit_messageBob;
    QLineEdit *lineEdit_keyBob;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *pushButton_keyBob;
    QPushButton *pushButton_key2Bob;
    QLineEdit *lineEdit_key2Bob;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEdit_cipherBob;
    QFrame *line;
    QFrame *line_2;
    QLabel *label_8;
    QPushButton *pushButton_guessAlisa;
    QLineEdit *lineEdit_guessAlisa;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *lineEdit_ResultBob;
    QLineEdit *lineEdit_ResultAlisa;
    QPushButton *pushButton_Play;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(418, 477);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 0, 71, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(290, 0, 81, 31));
        label_2->setFont(font);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 40, 171, 16));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);
        pushButton_messageBob = new QPushButton(centralWidget);
        pushButton_messageBob->setObjectName(QString::fromUtf8("pushButton_messageBob"));
        pushButton_messageBob->setGeometry(QRect(0, 70, 75, 23));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Times New Roman"));
        font2.setBold(true);
        font2.setWeight(75);
        pushButton_messageBob->setFont(font2);
        lineEdit_messageBob = new QLineEdit(centralWidget);
        lineEdit_messageBob->setObjectName(QString::fromUtf8("lineEdit_messageBob"));
        lineEdit_messageBob->setEnabled(false);
        lineEdit_messageBob->setGeometry(QRect(80, 70, 113, 20));
        lineEdit_keyBob = new QLineEdit(centralWidget);
        lineEdit_keyBob->setObjectName(QString::fromUtf8("lineEdit_keyBob"));
        lineEdit_keyBob->setGeometry(QRect(80, 130, 113, 20));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 100, 161, 16));
        label_4->setFont(font1);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 160, 161, 16));
        label_5->setFont(font1);
        pushButton_keyBob = new QPushButton(centralWidget);
        pushButton_keyBob->setObjectName(QString::fromUtf8("pushButton_keyBob"));
        pushButton_keyBob->setGeometry(QRect(0, 130, 75, 23));
        pushButton_keyBob->setFont(font2);
        pushButton_key2Bob = new QPushButton(centralWidget);
        pushButton_key2Bob->setObjectName(QString::fromUtf8("pushButton_key2Bob"));
        pushButton_key2Bob->setGeometry(QRect(0, 180, 75, 23));
        pushButton_key2Bob->setFont(font2);
        lineEdit_key2Bob = new QLineEdit(centralWidget);
        lineEdit_key2Bob->setObjectName(QString::fromUtf8("lineEdit_key2Bob"));
        lineEdit_key2Bob->setGeometry(QRect(80, 180, 113, 20));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(40, 220, 46, 13));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 210, 161, 16));
        label_7->setFont(font1);
        lineEdit_cipherBob = new QLineEdit(centralWidget);
        lineEdit_cipherBob->setObjectName(QString::fromUtf8("lineEdit_cipherBob"));
        lineEdit_cipherBob->setEnabled(false);
        lineEdit_cipherBob->setGeometry(QRect(10, 230, 113, 20));
        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(203, 0, 20, 371));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(0, 360, 421, 31));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(250, 40, 141, 16));
        label_8->setFont(font1);
        pushButton_guessAlisa = new QPushButton(centralWidget);
        pushButton_guessAlisa->setObjectName(QString::fromUtf8("pushButton_guessAlisa"));
        pushButton_guessAlisa->setGeometry(QRect(220, 70, 75, 23));
        pushButton_guessAlisa->setFont(font2);
        lineEdit_guessAlisa = new QLineEdit(centralWidget);
        lineEdit_guessAlisa->setObjectName(QString::fromUtf8("lineEdit_guessAlisa"));
        lineEdit_guessAlisa->setEnabled(false);
        lineEdit_guessAlisa->setGeometry(QRect(300, 70, 113, 20));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 260, 71, 31));
        label_9->setFont(font);
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(220, 260, 71, 31));
        label_10->setFont(font);
        lineEdit_ResultBob = new QLineEdit(centralWidget);
        lineEdit_ResultBob->setObjectName(QString::fromUtf8("lineEdit_ResultBob"));
        lineEdit_ResultBob->setEnabled(false);
        lineEdit_ResultBob->setGeometry(QRect(10, 300, 113, 20));
        lineEdit_ResultAlisa = new QLineEdit(centralWidget);
        lineEdit_ResultAlisa->setObjectName(QString::fromUtf8("lineEdit_ResultAlisa"));
        lineEdit_ResultAlisa->setEnabled(false);
        lineEdit_ResultAlisa->setGeometry(QRect(220, 300, 113, 20));
        pushButton_Play = new QPushButton(centralWidget);
        pushButton_Play->setObjectName(QString::fromUtf8("pushButton_Play"));
        pushButton_Play->setGeometry(QRect(40, 380, 341, 41));
        pushButton_Play->setFont(font);
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 320, 51, 21));
        label_11->setFrameShape(QFrame::NoFrame);
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(70, 320, 141, 21));
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 340, 191, 16));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 418, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Bob", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Alice", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "1. \320\223\320\265\320\275\320\265\321\200\320\270\321\200\321\203\320\265\320\274 \321\201\320\276\320\276\320\261\321\211\320\265\320\275\320\270\320\265", 0, QApplication::UnicodeUTF8));
        pushButton_messageBob->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\266\320\274\320\270", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "2. \320\223\320\265\320\275\320\265\321\200\320\270\321\200\321\203\320\265\320\274 \320\272\320\273\321\216\321\207 \342\204\2261", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "3. \320\223\320\265\320\275\320\265\321\200\320\270\321\200\321\203\320\265\320\274 \320\272\320\273\321\216\321\207 \342\204\2262", 0, QApplication::UnicodeUTF8));
        pushButton_keyBob->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\266\320\274\320\270", 0, QApplication::UnicodeUTF8));
        pushButton_key2Bob->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\266\320\274\320\270", 0, QApplication::UnicodeUTF8));
        label_6->setText(QString());
        label_7->setText(QApplication::translate("MainWindow", "\320\250\320\270\321\204\321\200\321\201\320\276\320\276\320\261\321\211\320\265\320\275\320\270\320\265:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "\320\241\320\264\320\265\320\273\320\260\320\271\321\202\320\265 \320\264\320\276\320\263\320\260\320\264\320\272\321\203", 0, QApplication::UnicodeUTF8));
        pushButton_guessAlisa->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\266\320\274\320\270", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\321\203\321\201:", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\321\203\321\201:", 0, QApplication::UnicodeUTF8));
        pushButton_Play->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\264\320\261\321\200\320\276\321\201\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        label_11->setText(QString());
        label_12->setText(QString());
        label_13->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
