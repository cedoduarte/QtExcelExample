/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionClose;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *buttonSaveExampleDocument;
    QTableWidget *tableWidget;
    QPushButton *buttonSaveDocument;
    QPushButton *buttonNewRow;
    QPushButton *buttonNewColumn;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(653, 472);
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName("actionClose");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer = new QSpacerItem(386, 38, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        buttonSaveExampleDocument = new QPushButton(centralwidget);
        buttonSaveExampleDocument->setObjectName("buttonSaveExampleDocument");

        gridLayout->addWidget(buttonSaveExampleDocument, 0, 1, 1, 1);

        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName("tableWidget");

        gridLayout->addWidget(tableWidget, 1, 0, 1, 3);

        buttonSaveDocument = new QPushButton(centralwidget);
        buttonSaveDocument->setObjectName("buttonSaveDocument");

        gridLayout->addWidget(buttonSaveDocument, 0, 0, 1, 1);

        buttonNewRow = new QPushButton(centralwidget);
        buttonNewRow->setObjectName("buttonNewRow");

        gridLayout->addWidget(buttonNewRow, 2, 0, 1, 1);

        buttonNewColumn = new QPushButton(centralwidget);
        buttonNewColumn->setObjectName("buttonNewColumn");

        gridLayout->addWidget(buttonNewColumn, 2, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 653, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionClose);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionClose->setText(QCoreApplication::translate("MainWindow", "Close", nullptr));
        buttonSaveExampleDocument->setText(QCoreApplication::translate("MainWindow", "Save example document", nullptr));
        buttonSaveDocument->setText(QCoreApplication::translate("MainWindow", "Save document", nullptr));
        buttonNewRow->setText(QCoreApplication::translate("MainWindow", "New row", nullptr));
        buttonNewColumn->setText(QCoreApplication::translate("MainWindow", "New column", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
