/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_2;
    QAction *action_3;
    QAction *action_4;
    QAction *action_5;
    QAction *action_6;
    QAction *action_8;
    QAction *action_9;
    QAction *action_10;
    QAction *action_12;
    QAction *action_13;
    QAction *action_15;
    QAction *action_16;
    QAction *action_17;
    QAction *action_18;
    QAction *action_20;
    QAction *action_21;
    QAction *action_22;
    QAction *action_23;
    QAction *action_25;
    QAction *action_26;
    QAction *action_27;
    QAction *action_28;
    QAction *action_29;
    QAction *action_30;
    QAction *action_32;
    QWidget *centralWidget;
    QSlider *horizontalSlider;
    QSpinBox *spinBox;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QMenu *menu_5;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(625, 359);
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QStringLiteral("action_2"));
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QStringLiteral("action_3"));
        action_4 = new QAction(MainWindow);
        action_4->setObjectName(QStringLiteral("action_4"));
        action_5 = new QAction(MainWindow);
        action_5->setObjectName(QStringLiteral("action_5"));
        action_6 = new QAction(MainWindow);
        action_6->setObjectName(QStringLiteral("action_6"));
        action_8 = new QAction(MainWindow);
        action_8->setObjectName(QStringLiteral("action_8"));
        action_9 = new QAction(MainWindow);
        action_9->setObjectName(QStringLiteral("action_9"));
        action_10 = new QAction(MainWindow);
        action_10->setObjectName(QStringLiteral("action_10"));
        action_12 = new QAction(MainWindow);
        action_12->setObjectName(QStringLiteral("action_12"));
        action_13 = new QAction(MainWindow);
        action_13->setObjectName(QStringLiteral("action_13"));
        action_15 = new QAction(MainWindow);
        action_15->setObjectName(QStringLiteral("action_15"));
        action_16 = new QAction(MainWindow);
        action_16->setObjectName(QStringLiteral("action_16"));
        action_17 = new QAction(MainWindow);
        action_17->setObjectName(QStringLiteral("action_17"));
        action_18 = new QAction(MainWindow);
        action_18->setObjectName(QStringLiteral("action_18"));
        action_20 = new QAction(MainWindow);
        action_20->setObjectName(QStringLiteral("action_20"));
        action_21 = new QAction(MainWindow);
        action_21->setObjectName(QStringLiteral("action_21"));
        action_22 = new QAction(MainWindow);
        action_22->setObjectName(QStringLiteral("action_22"));
        action_23 = new QAction(MainWindow);
        action_23->setObjectName(QStringLiteral("action_23"));
        action_25 = new QAction(MainWindow);
        action_25->setObjectName(QStringLiteral("action_25"));
        action_26 = new QAction(MainWindow);
        action_26->setObjectName(QStringLiteral("action_26"));
        action_27 = new QAction(MainWindow);
        action_27->setObjectName(QStringLiteral("action_27"));
        action_28 = new QAction(MainWindow);
        action_28->setObjectName(QStringLiteral("action_28"));
        action_29 = new QAction(MainWindow);
        action_29->setObjectName(QStringLiteral("action_29"));
        action_30 = new QAction(MainWindow);
        action_30->setObjectName(QStringLiteral("action_30"));
        action_32 = new QAction(MainWindow);
        action_32->setObjectName(QStringLiteral("action_32"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(540, 270, 81, 22));
        horizontalSlider->setOrientation(Qt::Horizontal);
        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(490, 270, 42, 22));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(0, 0, 100000, 10000));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy);
        textEdit->setMaximumSize(QSize(16777215, 16777215));
        textEdit->setTabChangesFocus(true);
        textEdit->setTabStopWidth(100);
        MainWindow->setCentralWidget(centralWidget);
        textEdit->raise();
        spinBox->raise();
        horizontalSlider->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 625, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        menu_4 = new QMenu(menuBar);
        menu_4->setObjectName(QStringLiteral("menu_4"));
        menu_5 = new QMenu(menuBar);
        menu_5->setObjectName(QStringLiteral("menu_5"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menuBar->addAction(menu_4->menuAction());
        menuBar->addAction(menu_5->menuAction());
        menu->addAction(action_2);
        menu->addAction(action_4);
        menu->addAction(action_5);
        menu->addAction(action_6);
        menu->addSeparator();
        menu->addAction(action_9);
        menu->addAction(action_10);
        menu->addSeparator();
        menu->addAction(action_12);
        menu_2->addAction(action_13);
        menu_2->addSeparator();
        menu_2->addAction(action_15);
        menu_2->addAction(action_16);
        menu_2->addAction(action_17);
        menu_2->addAction(action_18);
        menu_2->addSeparator();
        menu_2->addAction(action_20);
        menu_2->addAction(action_21);
        menu_2->addAction(action_22);
        menu_2->addAction(action_23);
        menu_2->addSeparator();
        menu_2->addAction(action_25);
        menu_2->addAction(action_26);
        menu_3->addAction(action_27);
        menu_3->addAction(action_28);
        menu_4->addAction(action_32);
        menu_5->addAction(action_29);
        menu_5->addSeparator();
        menu_5->addAction(action_30);
        mainToolBar->addAction(action_2);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        action_2->setText(QApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", 0));
        action_3->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", 0));
        action_4->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214...", 0));
        action_5->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0));
        action_6->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\272\320\260\320\272...", 0));
        action_8->setText(QApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \321\201\321\202\321\200\320\260\320\275\320\270\321\206\321\213", 0));
        action_9->setText(QApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \321\201\321\202\321\200\320\260\320\275\320\270\321\206\321\213...", 0));
        action_10->setText(QApplication::translate("MainWindow", "\320\237\320\265\321\207\320\260\321\202\321\214...", 0));
        action_12->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", 0));
        action_13->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214", 0));
        action_15->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\200\320\265\320\267\320\260\321\202\321\214", 0));
        action_16->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\277\320\270\321\200\320\276\320\262\320\260\321\202\321\214", 0));
        action_17->setText(QApplication::translate("MainWindow", "\320\222\321\201\321\202\320\260\320\262\320\270\321\202\321\214", 0));
        action_18->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", 0));
        action_20->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270...", 0));
        action_21->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\271\321\202\320\270 \320\264\320\260\320\273\320\265\320\265", 0));
        action_22->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\274\320\265\320\275\320\270\321\202\321\214...", 0));
        action_23->setText(QApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\271\321\202\320\270...", 0));
        action_25->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\264\320\265\320\273\320\270\321\202\321\214 \320\262\321\201\320\265", 0));
        action_26->setText(QApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217 \320\270 \320\264\320\260\321\202\320\260", 0));
        action_27->setText(QApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\275\320\276\321\201 \320\277\320\276 \321\201\320\273\320\276\320\262\320\260\320\274", 0));
        action_28->setText(QApplication::translate("MainWindow", "\320\250\321\200\320\270\321\204\321\202", 0));
        action_29->setText(QApplication::translate("MainWindow", "\320\237\320\276\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214 \321\201\320\277\321\200\320\260\320\262\320\272\321\203", 0));
        action_30->setText(QApplication::translate("MainWindow", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", 0));
        action_32->setText(QApplication::translate("MainWindow", "\320\241\321\202\321\200\320\276\320\272\320\260 \321\201\320\276\321\201\321\202\320\276\321\217\320\275\320\270\321\217", 0));
        menu->setTitle(QApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", 0));
        menu_2->setTitle(QApplication::translate("MainWindow", "\320\237\321\200\320\260\320\262\320\272\320\260", 0));
        menu_3->setTitle(QApplication::translate("MainWindow", "\320\244\320\276\321\200\320\274\320\260\321\202", 0));
        menu_4->setTitle(QApplication::translate("MainWindow", "\320\222\320\270\320\264", 0));
        menu_5->setTitle(QApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
