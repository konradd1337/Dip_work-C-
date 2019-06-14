/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *new_file;
    QAction *open_file;
    QAction *save_file;
    QWidget *centralWidget;
    QWidget *win01;
    QPushButton *get_button;
    QPushButton *Clear_button;
    QPushButton *dell_button;
    QFrame *horizontalFrame;
    QGridLayout *gridLayout;
    QLabel *label_7;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_9;
    QLabel *label_6;
    QLabel *label;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout_3;
    QLineEdit *TabStorage2;
    QLineEdit *TabConsumption4;
    QLineEdit *TabName4;
    QLineEdit *TabStorage3;
    QLineEdit *TabConsumption2;
    QLabel *TabNum7;
    QLineEdit *TabCost5;
    QLineEdit *TabCost1;
    QLineEdit *TabConsumption7;
    QLineEdit *TabDelivery1;
    QLineEdit *TabDelivery3;
    QCheckBox *TabCheck4;
    QLineEdit *TabStorage7;
    QLineEdit *TabName6;
    QLineEdit *TabCost7;
    QLineEdit *TabCost3;
    QLabel *TabNum5;
    QLabel *TabNum3;
    QLineEdit *TabCost4;
    QLineEdit *TabName3;
    QLabel *TabNum4;
    QLineEdit *TabDelivery6;
    QLineEdit *TabDelivery5;
    QLineEdit *TabStorage1;
    QCheckBox *TabCheck3;
    QCheckBox *TabCheck7;
    QLineEdit *TabDelivery4;
    QLabel *TabNum6;
    QCheckBox *TabCheck1;
    QLabel *TabNum1;
    QLineEdit *TabDelivery2;
    QLineEdit *TabCost2;
    QLineEdit *TabDelivery7;
    QLineEdit *TabStorage6;
    QLineEdit *TabName7;
    QLineEdit *TabName1;
    QLineEdit *TabConsumption1;
    QCheckBox *TabCheck5;
    QLineEdit *TabConsumption5;
    QCheckBox *TabCheck2;
    QLineEdit *TabName2;
    QLineEdit *TabName5;
    QLineEdit *TabStorage4;
    QLineEdit *TabConsumption3;
    QLineEdit *TabCost6;
    QLabel *TabNum2;
    QLineEdit *TabStorage5;
    QLineEdit *TabConsumption6;
    QCheckBox *TabCheck6;
    QPushButton *add_button;
    QGroupBox *groupBox;
    QRadioButton *model_1;
    QRadioButton *model_2;
    QRadioButton *model_3;
    QRadioButton *model_4;
    QLabel *label_17;
    QLineEdit *year_cost;
    QWidget *win02;
    QPushButton *back_button;
    QLabel *label_5;
    QLabel *label_8;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_4;
    QWidget *widget_2;
    QWidget *widget;
    QWidget *widget_3;
    QFrame *frame;
    QLabel *label_10;
    QCustomPlot *graph;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_18;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menu;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(989, 410);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/prog_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        new_file = new QAction(MainWindow);
        new_file->setObjectName(QString::fromUtf8("new_file"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/new_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        new_file->setIcon(icon1);
        open_file = new QAction(MainWindow);
        open_file->setObjectName(QString::fromUtf8("open_file"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/open_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        open_file->setIcon(icon2);
        save_file = new QAction(MainWindow);
        save_file->setObjectName(QString::fromUtf8("save_file"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/save_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        save_file->setIcon(icon3);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setEnabled(true);
        win01 = new QWidget(centralWidget);
        win01->setObjectName(QString::fromUtf8("win01"));
        win01->setEnabled(true);
        win01->setGeometry(QRect(0, 0, 989, 357));
        get_button = new QPushButton(win01);
        get_button->setObjectName(QString::fromUtf8("get_button"));
        get_button->setGeometry(QRect(750, 310, 121, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(11);
        get_button->setFont(font);
        get_button->setAutoFillBackground(false);
        get_button->setStyleSheet(QString::fromUtf8("color: #fff;\n"
"background-color: rgb(0, 170, 0)"));
        Clear_button = new QPushButton(win01);
        Clear_button->setObjectName(QString::fromUtf8("Clear_button"));
        Clear_button->setGeometry(QRect(770, 250, 101, 21));
        dell_button = new QPushButton(win01);
        dell_button->setObjectName(QString::fromUtf8("dell_button"));
        dell_button->setGeometry(QRect(770, 280, 101, 21));
        dell_button->setStyleSheet(QString::fromUtf8("border-image: url(:/cross_1.png);"));
        horizontalFrame = new QFrame(win01);
        horizontalFrame->setObjectName(QString::fromUtf8("horizontalFrame"));
        horizontalFrame->setGeometry(QRect(10, 15, 751, 36));
        horizontalFrame->setFrameShape(QFrame::StyledPanel);
        horizontalFrame->setFrameShadow(QFrame::Sunken);
        horizontalFrame->setLineWidth(1);
        gridLayout = new QGridLayout(horizontalFrame);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMinimumSize);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        label_7 = new QLabel(horizontalFrame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setMinimumSize(QSize(140, 0));
        label_7->setMaximumSize(QSize(140, 16777215));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(10);
        label_7->setFont(font1);
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_7, 0, 5, 1, 1);

        label_4 = new QLabel(horizontalFrame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setEnabled(true);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMinimumSize(QSize(20, 0));
        label_4->setMaximumSize(QSize(20, 16777215));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setWeight(50);
        label_4->setFont(font2);
        label_4->setMouseTracking(false);
        label_4->setTabletTracking(false);
        label_4->setFocusPolicy(Qt::NoFocus);
        label_4->setAcceptDrops(false);
        label_4->setLineWidth(0);

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        label_2 = new QLabel(horizontalFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setEnabled(true);
        label_2->setMinimumSize(QSize(90, 0));
        label_2->setMaximumSize(QSize(90, 16777215));
        label_2->setFont(font2);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        label_3 = new QLabel(horizontalFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setEnabled(true);
        label_3->setMinimumSize(QSize(90, 0));
        label_3->setMaximumSize(QSize(90, 16777215));
        label_3->setFont(font2);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 0, 3, 1, 1);

        label_9 = new QLabel(horizontalFrame);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(57, 0));
        label_9->setMaximumSize(QSize(30, 16777215));
        label_9->setFont(font1);
        label_9->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(label_9, 0, 6, 1, 1);

        label_6 = new QLabel(horizontalFrame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(140, 0));
        label_6->setMaximumSize(QSize(140, 16777215));
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 0, 4, 1, 1);

        label = new QLabel(horizontalFrame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(true);
        label->setMinimumSize(QSize(130, 0));
        label->setMaximumSize(QSize(130, 16777215));
        label->setFont(font2);
        label->setLineWidth(0);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        scrollArea_2 = new QScrollArea(win01);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(10, 50, 751, 251));
        scrollArea_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 732, 194));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollAreaWidgetContents_2->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents_2->setSizePolicy(sizePolicy1);
        scrollAreaWidgetContents_2->setAutoFillBackground(true);
        gridLayout_3 = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setSizeConstraint(QLayout::SetMinimumSize);
        gridLayout_3->setContentsMargins(9, 9, 9, -1);
        TabStorage2 = new QLineEdit(scrollAreaWidgetContents_2);
        TabStorage2->setObjectName(QString::fromUtf8("TabStorage2"));
        TabStorage2->setMinimumSize(QSize(140, 0));
        TabStorage2->setMaximumSize(QSize(140, 16777215));

        gridLayout_3->addWidget(TabStorage2, 3, 4, 1, 1);

        TabConsumption4 = new QLineEdit(scrollAreaWidgetContents_2);
        TabConsumption4->setObjectName(QString::fromUtf8("TabConsumption4"));
        TabConsumption4->setMinimumSize(QSize(90, 0));
        TabConsumption4->setMaximumSize(QSize(90, 16777215));

        gridLayout_3->addWidget(TabConsumption4, 5, 3, 1, 1);

        TabName4 = new QLineEdit(scrollAreaWidgetContents_2);
        TabName4->setObjectName(QString::fromUtf8("TabName4"));
        TabName4->setMinimumSize(QSize(130, 0));
        TabName4->setMaximumSize(QSize(130, 16777215));

        gridLayout_3->addWidget(TabName4, 5, 1, 1, 1);

        TabStorage3 = new QLineEdit(scrollAreaWidgetContents_2);
        TabStorage3->setObjectName(QString::fromUtf8("TabStorage3"));
        TabStorage3->setMinimumSize(QSize(140, 0));
        TabStorage3->setMaximumSize(QSize(140, 16777215));

        gridLayout_3->addWidget(TabStorage3, 4, 4, 1, 1);

        TabConsumption2 = new QLineEdit(scrollAreaWidgetContents_2);
        TabConsumption2->setObjectName(QString::fromUtf8("TabConsumption2"));
        TabConsumption2->setMinimumSize(QSize(90, 0));
        TabConsumption2->setMaximumSize(QSize(90, 16777215));

        gridLayout_3->addWidget(TabConsumption2, 3, 3, 1, 1);

        TabNum7 = new QLabel(scrollAreaWidgetContents_2);
        TabNum7->setObjectName(QString::fromUtf8("TabNum7"));
        TabNum7->setEnabled(true);
        TabNum7->setMinimumSize(QSize(20, 0));
        TabNum7->setMaximumSize(QSize(20, 16777215));
        TabNum7->setFont(font2);
        TabNum7->setLineWidth(0);

        gridLayout_3->addWidget(TabNum7, 8, 0, 1, 1);

        TabCost5 = new QLineEdit(scrollAreaWidgetContents_2);
        TabCost5->setObjectName(QString::fromUtf8("TabCost5"));
        TabCost5->setMinimumSize(QSize(90, 0));
        TabCost5->setMaximumSize(QSize(90, 16777215));
        TabCost5->setInputMethodHints(Qt::ImhPreferNumbers);

        gridLayout_3->addWidget(TabCost5, 6, 2, 1, 1);

        TabCost1 = new QLineEdit(scrollAreaWidgetContents_2);
        TabCost1->setObjectName(QString::fromUtf8("TabCost1"));
        TabCost1->setMinimumSize(QSize(90, 0));
        TabCost1->setMaximumSize(QSize(90, 16777215));
        TabCost1->setInputMethodHints(Qt::ImhPreferNumbers);

        gridLayout_3->addWidget(TabCost1, 2, 2, 1, 1);

        TabConsumption7 = new QLineEdit(scrollAreaWidgetContents_2);
        TabConsumption7->setObjectName(QString::fromUtf8("TabConsumption7"));
        TabConsumption7->setMinimumSize(QSize(90, 0));
        TabConsumption7->setMaximumSize(QSize(90, 16777215));

        gridLayout_3->addWidget(TabConsumption7, 8, 3, 1, 1);

        TabDelivery1 = new QLineEdit(scrollAreaWidgetContents_2);
        TabDelivery1->setObjectName(QString::fromUtf8("TabDelivery1"));
        TabDelivery1->setMinimumSize(QSize(140, 0));
        TabDelivery1->setMaximumSize(QSize(140, 16777215));

        gridLayout_3->addWidget(TabDelivery1, 2, 5, 1, 1);

        TabDelivery3 = new QLineEdit(scrollAreaWidgetContents_2);
        TabDelivery3->setObjectName(QString::fromUtf8("TabDelivery3"));
        TabDelivery3->setMinimumSize(QSize(140, 0));
        TabDelivery3->setMaximumSize(QSize(140, 16777215));

        gridLayout_3->addWidget(TabDelivery3, 4, 5, 1, 1);

        TabCheck4 = new QCheckBox(scrollAreaWidgetContents_2);
        TabCheck4->setObjectName(QString::fromUtf8("TabCheck4"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(TabCheck4->sizePolicy().hasHeightForWidth());
        TabCheck4->setSizePolicy(sizePolicy2);
        TabCheck4->setMinimumSize(QSize(30, 0));
        TabCheck4->setMaximumSize(QSize(30, 16777215));
        TabCheck4->setSizeIncrement(QSize(0, 0));
        TabCheck4->setBaseSize(QSize(0, 0));
        TabCheck4->setMouseTracking(true);
        TabCheck4->setLayoutDirection(Qt::RightToLeft);
        TabCheck4->setAutoFillBackground(false);
        TabCheck4->setCheckable(true);
        TabCheck4->setChecked(false);
        TabCheck4->setAutoRepeat(false);
        TabCheck4->setAutoExclusive(false);
        TabCheck4->setTristate(false);

        gridLayout_3->addWidget(TabCheck4, 5, 6, 1, 1);

        TabStorage7 = new QLineEdit(scrollAreaWidgetContents_2);
        TabStorage7->setObjectName(QString::fromUtf8("TabStorage7"));
        TabStorage7->setMinimumSize(QSize(140, 0));
        TabStorage7->setMaximumSize(QSize(140, 16777215));

        gridLayout_3->addWidget(TabStorage7, 8, 4, 1, 1);

        TabName6 = new QLineEdit(scrollAreaWidgetContents_2);
        TabName6->setObjectName(QString::fromUtf8("TabName6"));
        TabName6->setMinimumSize(QSize(130, 0));
        TabName6->setMaximumSize(QSize(130, 16777215));

        gridLayout_3->addWidget(TabName6, 7, 1, 1, 1);

        TabCost7 = new QLineEdit(scrollAreaWidgetContents_2);
        TabCost7->setObjectName(QString::fromUtf8("TabCost7"));
        TabCost7->setMinimumSize(QSize(90, 0));
        TabCost7->setMaximumSize(QSize(90, 16777215));
        TabCost7->setInputMethodHints(Qt::ImhPreferNumbers);

        gridLayout_3->addWidget(TabCost7, 8, 2, 1, 1);

        TabCost3 = new QLineEdit(scrollAreaWidgetContents_2);
        TabCost3->setObjectName(QString::fromUtf8("TabCost3"));
        TabCost3->setMinimumSize(QSize(90, 0));
        TabCost3->setMaximumSize(QSize(90, 16777215));
        TabCost3->setInputMethodHints(Qt::ImhPreferNumbers);

        gridLayout_3->addWidget(TabCost3, 4, 2, 1, 1);

        TabNum5 = new QLabel(scrollAreaWidgetContents_2);
        TabNum5->setObjectName(QString::fromUtf8("TabNum5"));
        TabNum5->setEnabled(true);
        TabNum5->setMinimumSize(QSize(20, 0));
        TabNum5->setMaximumSize(QSize(20, 16777215));
        TabNum5->setFont(font2);
        TabNum5->setLineWidth(0);

        gridLayout_3->addWidget(TabNum5, 6, 0, 1, 1);

        TabNum3 = new QLabel(scrollAreaWidgetContents_2);
        TabNum3->setObjectName(QString::fromUtf8("TabNum3"));
        TabNum3->setEnabled(true);
        TabNum3->setMinimumSize(QSize(20, 0));
        TabNum3->setMaximumSize(QSize(20, 16777215));
        TabNum3->setFont(font2);
        TabNum3->setLineWidth(0);

        gridLayout_3->addWidget(TabNum3, 4, 0, 1, 1);

        TabCost4 = new QLineEdit(scrollAreaWidgetContents_2);
        TabCost4->setObjectName(QString::fromUtf8("TabCost4"));
        TabCost4->setMinimumSize(QSize(90, 0));
        TabCost4->setMaximumSize(QSize(90, 16777215));
        TabCost4->setInputMethodHints(Qt::ImhPreferNumbers);

        gridLayout_3->addWidget(TabCost4, 5, 2, 1, 1);

        TabName3 = new QLineEdit(scrollAreaWidgetContents_2);
        TabName3->setObjectName(QString::fromUtf8("TabName3"));
        TabName3->setMinimumSize(QSize(130, 0));
        TabName3->setMaximumSize(QSize(130, 16777215));

        gridLayout_3->addWidget(TabName3, 4, 1, 1, 1);

        TabNum4 = new QLabel(scrollAreaWidgetContents_2);
        TabNum4->setObjectName(QString::fromUtf8("TabNum4"));
        TabNum4->setEnabled(true);
        TabNum4->setMinimumSize(QSize(20, 0));
        TabNum4->setMaximumSize(QSize(20, 16777215));
        TabNum4->setFont(font2);
        TabNum4->setLineWidth(0);

        gridLayout_3->addWidget(TabNum4, 5, 0, 1, 1);

        TabDelivery6 = new QLineEdit(scrollAreaWidgetContents_2);
        TabDelivery6->setObjectName(QString::fromUtf8("TabDelivery6"));
        TabDelivery6->setMinimumSize(QSize(140, 0));
        TabDelivery6->setMaximumSize(QSize(140, 16777215));

        gridLayout_3->addWidget(TabDelivery6, 7, 5, 1, 1);

        TabDelivery5 = new QLineEdit(scrollAreaWidgetContents_2);
        TabDelivery5->setObjectName(QString::fromUtf8("TabDelivery5"));
        TabDelivery5->setMinimumSize(QSize(140, 0));
        TabDelivery5->setMaximumSize(QSize(140, 16777215));

        gridLayout_3->addWidget(TabDelivery5, 6, 5, 1, 1);

        TabStorage1 = new QLineEdit(scrollAreaWidgetContents_2);
        TabStorage1->setObjectName(QString::fromUtf8("TabStorage1"));
        TabStorage1->setMinimumSize(QSize(140, 0));
        TabStorage1->setMaximumSize(QSize(140, 16777215));

        gridLayout_3->addWidget(TabStorage1, 2, 4, 1, 1);

        TabCheck3 = new QCheckBox(scrollAreaWidgetContents_2);
        TabCheck3->setObjectName(QString::fromUtf8("TabCheck3"));
        sizePolicy2.setHeightForWidth(TabCheck3->sizePolicy().hasHeightForWidth());
        TabCheck3->setSizePolicy(sizePolicy2);
        TabCheck3->setMinimumSize(QSize(30, 0));
        TabCheck3->setMaximumSize(QSize(30, 16777215));
        TabCheck3->setSizeIncrement(QSize(0, 0));
        TabCheck3->setBaseSize(QSize(0, 0));
        TabCheck3->setMouseTracking(true);
        TabCheck3->setLayoutDirection(Qt::RightToLeft);
        TabCheck3->setAutoFillBackground(false);
        TabCheck3->setCheckable(true);
        TabCheck3->setChecked(false);
        TabCheck3->setAutoRepeat(false);
        TabCheck3->setAutoExclusive(false);
        TabCheck3->setTristate(false);

        gridLayout_3->addWidget(TabCheck3, 4, 6, 1, 1);

        TabCheck7 = new QCheckBox(scrollAreaWidgetContents_2);
        TabCheck7->setObjectName(QString::fromUtf8("TabCheck7"));
        sizePolicy2.setHeightForWidth(TabCheck7->sizePolicy().hasHeightForWidth());
        TabCheck7->setSizePolicy(sizePolicy2);
        TabCheck7->setMinimumSize(QSize(30, 0));
        TabCheck7->setMaximumSize(QSize(30, 16777215));
        TabCheck7->setSizeIncrement(QSize(0, 0));
        TabCheck7->setBaseSize(QSize(0, 0));
        TabCheck7->setMouseTracking(true);
        TabCheck7->setLayoutDirection(Qt::RightToLeft);
        TabCheck7->setAutoFillBackground(false);
        TabCheck7->setCheckable(true);
        TabCheck7->setChecked(false);
        TabCheck7->setAutoRepeat(false);
        TabCheck7->setAutoExclusive(false);
        TabCheck7->setTristate(false);

        gridLayout_3->addWidget(TabCheck7, 8, 6, 1, 1);

        TabDelivery4 = new QLineEdit(scrollAreaWidgetContents_2);
        TabDelivery4->setObjectName(QString::fromUtf8("TabDelivery4"));
        TabDelivery4->setMinimumSize(QSize(140, 0));
        TabDelivery4->setMaximumSize(QSize(140, 16777215));

        gridLayout_3->addWidget(TabDelivery4, 5, 5, 1, 1);

        TabNum6 = new QLabel(scrollAreaWidgetContents_2);
        TabNum6->setObjectName(QString::fromUtf8("TabNum6"));
        TabNum6->setEnabled(true);
        TabNum6->setMinimumSize(QSize(20, 0));
        TabNum6->setMaximumSize(QSize(20, 16777215));
        TabNum6->setFont(font2);
        TabNum6->setLineWidth(0);

        gridLayout_3->addWidget(TabNum6, 7, 0, 1, 1);

        TabCheck1 = new QCheckBox(scrollAreaWidgetContents_2);
        TabCheck1->setObjectName(QString::fromUtf8("TabCheck1"));
        sizePolicy2.setHeightForWidth(TabCheck1->sizePolicy().hasHeightForWidth());
        TabCheck1->setSizePolicy(sizePolicy2);
        TabCheck1->setMinimumSize(QSize(30, 0));
        TabCheck1->setMaximumSize(QSize(30, 16777215));
        TabCheck1->setSizeIncrement(QSize(0, 0));
        TabCheck1->setBaseSize(QSize(0, 0));
        TabCheck1->setMouseTracking(true);
        TabCheck1->setLayoutDirection(Qt::RightToLeft);
        TabCheck1->setAutoFillBackground(false);
        TabCheck1->setCheckable(true);
        TabCheck1->setChecked(false);
        TabCheck1->setAutoRepeat(false);
        TabCheck1->setAutoExclusive(false);
        TabCheck1->setTristate(false);

        gridLayout_3->addWidget(TabCheck1, 2, 6, 1, 1);

        TabNum1 = new QLabel(scrollAreaWidgetContents_2);
        TabNum1->setObjectName(QString::fromUtf8("TabNum1"));
        TabNum1->setEnabled(true);
        TabNum1->setMinimumSize(QSize(20, 0));
        TabNum1->setMaximumSize(QSize(20, 16777215));
        TabNum1->setFont(font2);
        TabNum1->setLineWidth(0);

        gridLayout_3->addWidget(TabNum1, 2, 0, 1, 1);

        TabDelivery2 = new QLineEdit(scrollAreaWidgetContents_2);
        TabDelivery2->setObjectName(QString::fromUtf8("TabDelivery2"));
        TabDelivery2->setMinimumSize(QSize(140, 0));
        TabDelivery2->setMaximumSize(QSize(140, 16777215));

        gridLayout_3->addWidget(TabDelivery2, 3, 5, 1, 1);

        TabCost2 = new QLineEdit(scrollAreaWidgetContents_2);
        TabCost2->setObjectName(QString::fromUtf8("TabCost2"));
        TabCost2->setMinimumSize(QSize(90, 0));
        TabCost2->setMaximumSize(QSize(90, 16777215));
        TabCost2->setInputMethodHints(Qt::ImhPreferNumbers);

        gridLayout_3->addWidget(TabCost2, 3, 2, 1, 1);

        TabDelivery7 = new QLineEdit(scrollAreaWidgetContents_2);
        TabDelivery7->setObjectName(QString::fromUtf8("TabDelivery7"));
        TabDelivery7->setMinimumSize(QSize(140, 0));
        TabDelivery7->setMaximumSize(QSize(140, 16777215));

        gridLayout_3->addWidget(TabDelivery7, 8, 5, 1, 1);

        TabStorage6 = new QLineEdit(scrollAreaWidgetContents_2);
        TabStorage6->setObjectName(QString::fromUtf8("TabStorage6"));
        TabStorage6->setMinimumSize(QSize(140, 0));
        TabStorage6->setMaximumSize(QSize(140, 16777215));

        gridLayout_3->addWidget(TabStorage6, 7, 4, 1, 1);

        TabName7 = new QLineEdit(scrollAreaWidgetContents_2);
        TabName7->setObjectName(QString::fromUtf8("TabName7"));
        TabName7->setMinimumSize(QSize(130, 0));
        TabName7->setMaximumSize(QSize(130, 16777215));

        gridLayout_3->addWidget(TabName7, 8, 1, 1, 1);

        TabName1 = new QLineEdit(scrollAreaWidgetContents_2);
        TabName1->setObjectName(QString::fromUtf8("TabName1"));
        TabName1->setMinimumSize(QSize(130, 0));
        TabName1->setMaximumSize(QSize(130, 16777215));

        gridLayout_3->addWidget(TabName1, 2, 1, 1, 1);

        TabConsumption1 = new QLineEdit(scrollAreaWidgetContents_2);
        TabConsumption1->setObjectName(QString::fromUtf8("TabConsumption1"));
        TabConsumption1->setMinimumSize(QSize(90, 0));
        TabConsumption1->setMaximumSize(QSize(90, 16777215));

        gridLayout_3->addWidget(TabConsumption1, 2, 3, 1, 1);

        TabCheck5 = new QCheckBox(scrollAreaWidgetContents_2);
        TabCheck5->setObjectName(QString::fromUtf8("TabCheck5"));
        sizePolicy2.setHeightForWidth(TabCheck5->sizePolicy().hasHeightForWidth());
        TabCheck5->setSizePolicy(sizePolicy2);
        TabCheck5->setMinimumSize(QSize(30, 0));
        TabCheck5->setMaximumSize(QSize(30, 16777215));
        TabCheck5->setSizeIncrement(QSize(0, 0));
        TabCheck5->setBaseSize(QSize(0, 0));
        TabCheck5->setMouseTracking(true);
        TabCheck5->setLayoutDirection(Qt::RightToLeft);
        TabCheck5->setAutoFillBackground(false);
        TabCheck5->setCheckable(true);
        TabCheck5->setChecked(false);
        TabCheck5->setAutoRepeat(false);
        TabCheck5->setAutoExclusive(false);
        TabCheck5->setTristate(false);

        gridLayout_3->addWidget(TabCheck5, 6, 6, 1, 1);

        TabConsumption5 = new QLineEdit(scrollAreaWidgetContents_2);
        TabConsumption5->setObjectName(QString::fromUtf8("TabConsumption5"));
        TabConsumption5->setMinimumSize(QSize(90, 0));
        TabConsumption5->setMaximumSize(QSize(90, 16777215));

        gridLayout_3->addWidget(TabConsumption5, 6, 3, 1, 1);

        TabCheck2 = new QCheckBox(scrollAreaWidgetContents_2);
        TabCheck2->setObjectName(QString::fromUtf8("TabCheck2"));
        sizePolicy2.setHeightForWidth(TabCheck2->sizePolicy().hasHeightForWidth());
        TabCheck2->setSizePolicy(sizePolicy2);
        TabCheck2->setMinimumSize(QSize(30, 0));
        TabCheck2->setMaximumSize(QSize(30, 16777215));
        TabCheck2->setSizeIncrement(QSize(0, 0));
        TabCheck2->setBaseSize(QSize(0, 0));
        TabCheck2->setMouseTracking(true);
        TabCheck2->setLayoutDirection(Qt::RightToLeft);
        TabCheck2->setAutoFillBackground(false);
        TabCheck2->setCheckable(true);
        TabCheck2->setChecked(false);
        TabCheck2->setAutoRepeat(false);
        TabCheck2->setAutoExclusive(false);
        TabCheck2->setTristate(false);

        gridLayout_3->addWidget(TabCheck2, 3, 6, 1, 1);

        TabName2 = new QLineEdit(scrollAreaWidgetContents_2);
        TabName2->setObjectName(QString::fromUtf8("TabName2"));
        TabName2->setMinimumSize(QSize(130, 0));
        TabName2->setMaximumSize(QSize(130, 16777215));

        gridLayout_3->addWidget(TabName2, 3, 1, 1, 1);

        TabName5 = new QLineEdit(scrollAreaWidgetContents_2);
        TabName5->setObjectName(QString::fromUtf8("TabName5"));
        TabName5->setMinimumSize(QSize(130, 0));
        TabName5->setMaximumSize(QSize(130, 16777215));

        gridLayout_3->addWidget(TabName5, 6, 1, 1, 1);

        TabStorage4 = new QLineEdit(scrollAreaWidgetContents_2);
        TabStorage4->setObjectName(QString::fromUtf8("TabStorage4"));
        TabStorage4->setMinimumSize(QSize(140, 0));
        TabStorage4->setMaximumSize(QSize(140, 16777215));

        gridLayout_3->addWidget(TabStorage4, 5, 4, 1, 1);

        TabConsumption3 = new QLineEdit(scrollAreaWidgetContents_2);
        TabConsumption3->setObjectName(QString::fromUtf8("TabConsumption3"));
        TabConsumption3->setMinimumSize(QSize(90, 0));
        TabConsumption3->setMaximumSize(QSize(90, 16777215));

        gridLayout_3->addWidget(TabConsumption3, 4, 3, 1, 1);

        TabCost6 = new QLineEdit(scrollAreaWidgetContents_2);
        TabCost6->setObjectName(QString::fromUtf8("TabCost6"));
        TabCost6->setMinimumSize(QSize(90, 0));
        TabCost6->setMaximumSize(QSize(90, 16777215));
        TabCost6->setInputMethodHints(Qt::ImhPreferNumbers);

        gridLayout_3->addWidget(TabCost6, 7, 2, 1, 1);

        TabNum2 = new QLabel(scrollAreaWidgetContents_2);
        TabNum2->setObjectName(QString::fromUtf8("TabNum2"));
        TabNum2->setEnabled(true);
        TabNum2->setMinimumSize(QSize(20, 0));
        TabNum2->setMaximumSize(QSize(20, 16777215));
        TabNum2->setFont(font2);
        TabNum2->setLineWidth(0);

        gridLayout_3->addWidget(TabNum2, 3, 0, 1, 1);

        TabStorage5 = new QLineEdit(scrollAreaWidgetContents_2);
        TabStorage5->setObjectName(QString::fromUtf8("TabStorage5"));
        TabStorage5->setMinimumSize(QSize(140, 0));
        TabStorage5->setMaximumSize(QSize(140, 16777215));

        gridLayout_3->addWidget(TabStorage5, 6, 4, 1, 1);

        TabConsumption6 = new QLineEdit(scrollAreaWidgetContents_2);
        TabConsumption6->setObjectName(QString::fromUtf8("TabConsumption6"));
        TabConsumption6->setMinimumSize(QSize(90, 0));
        TabConsumption6->setMaximumSize(QSize(90, 16777215));

        gridLayout_3->addWidget(TabConsumption6, 7, 3, 1, 1);

        TabCheck6 = new QCheckBox(scrollAreaWidgetContents_2);
        TabCheck6->setObjectName(QString::fromUtf8("TabCheck6"));
        sizePolicy2.setHeightForWidth(TabCheck6->sizePolicy().hasHeightForWidth());
        TabCheck6->setSizePolicy(sizePolicy2);
        TabCheck6->setMinimumSize(QSize(30, 0));
        TabCheck6->setMaximumSize(QSize(30, 16777215));
        TabCheck6->setSizeIncrement(QSize(0, 0));
        TabCheck6->setBaseSize(QSize(0, 0));
        TabCheck6->setMouseTracking(true);
        TabCheck6->setLayoutDirection(Qt::RightToLeft);
        TabCheck6->setAutoFillBackground(false);
        TabCheck6->setCheckable(true);
        TabCheck6->setChecked(false);
        TabCheck6->setAutoRepeat(false);
        TabCheck6->setAutoExclusive(false);
        TabCheck6->setTristate(false);

        gridLayout_3->addWidget(TabCheck6, 7, 6, 1, 1);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        add_button = new QPushButton(win01);
        add_button->setObjectName(QString::fromUtf8("add_button"));
        add_button->setGeometry(QRect(10, 310, 131, 23));
        add_button->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:reflect, x1:0.585, y1:0.534818, x2:0.585, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(170, 0, 255, 255));\n"
"color: #fff;"));
        groupBox = new QGroupBox(win01);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setEnabled(true);
        groupBox->setGeometry(QRect(770, 10, 191, 181));
        model_1 = new QRadioButton(groupBox);
        model_1->setObjectName(QString::fromUtf8("model_1"));
        model_1->setGeometry(QRect(10, 20, 171, 31));
        model_1->setChecked(true);
        model_2 = new QRadioButton(groupBox);
        model_2->setObjectName(QString::fromUtf8("model_2"));
        model_2->setGeometry(QRect(10, 60, 171, 31));
        model_3 = new QRadioButton(groupBox);
        model_3->setObjectName(QString::fromUtf8("model_3"));
        model_3->setGeometry(QRect(10, 100, 171, 31));
        model_4 = new QRadioButton(groupBox);
        model_4->setObjectName(QString::fromUtf8("model_4"));
        model_4->setGeometry(QRect(10, 140, 171, 31));
        label_17 = new QLabel(win01);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(770, 200, 121, 16));
        year_cost = new QLineEdit(win01);
        year_cost->setObjectName(QString::fromUtf8("year_cost"));
        year_cost->setGeometry(QRect(900, 200, 61, 20));
        win02 = new QWidget(centralWidget);
        win02->setObjectName(QString::fromUtf8("win02"));
        win02->setGeometry(QRect(0, 0, 989, 357));
        back_button = new QPushButton(win02);
        back_button->setObjectName(QString::fromUtf8("back_button"));
        back_button->setGeometry(QRect(10, 310, 75, 23));
        label_5 = new QLabel(win02);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(310, 70, 181, 20));
        label_5->setFont(font1);
        label_8 = new QLabel(win02);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(490, 70, 111, 20));
        label_8->setFont(font1);
        scrollArea = new QScrollArea(win02);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(10, 50, 291, 251));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 272, 19));
        sizePolicy1.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy1);
        gridLayout_4 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(-1, 0, -1, -1);
        widget_2 = new QWidget(scrollAreaWidgetContents);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));

        gridLayout_4->addWidget(widget_2, 0, 1, 1, 1);

        widget = new QWidget(scrollAreaWidgetContents);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMaximumSize(QSize(20, 16777215));

        gridLayout_4->addWidget(widget, 0, 0, 1, 1);

        widget_3 = new QWidget(scrollAreaWidgetContents);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setMaximumSize(QSize(50, 16777215));

        gridLayout_4->addWidget(widget_3, 0, 2, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);
        frame = new QFrame(win02);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 15, 291, 36));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Sunken);
        label_10 = new QLabel(frame);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(0, 0, 291, 36));
        label_10->setFont(font1);
        label_10->setAlignment(Qt::AlignCenter);
        graph = new QCustomPlot(win02);
        graph->setObjectName(QString::fromUtf8("graph"));
        graph->setGeometry(QRect(610, 20, 361, 341));
        label_11 = new QLabel(win02);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(310, 100, 181, 20));
        label_11->setFont(font1);
        label_12 = new QLabel(win02);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(490, 100, 111, 20));
        label_12->setFont(font1);
        label_13 = new QLabel(win02);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(310, 130, 181, 20));
        label_13->setFont(font1);
        label_14 = new QLabel(win02);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(490, 130, 111, 20));
        label_14->setFont(font1);
        label_15 = new QLabel(win02);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(310, 160, 181, 20));
        label_15->setFont(font1);
        label_16 = new QLabel(win02);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(490, 160, 111, 20));
        label_16->setFont(font1);
        label_18 = new QLabel(win02);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(320, 20, 271, 41));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Arial"));
        font3.setPointSize(9);
        font3.setBold(true);
        font3.setItalic(true);
        font3.setWeight(75);
        label_18->setFont(font3);
        label_18->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralWidget);
        win02->raise();
        win01->raise();
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 989, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(new_file);
        menu->addAction(open_file);
        menu->addAction(save_file);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Optimal inventory management strategies", nullptr));
        new_file->setText(QApplication::translate("MainWindow", "\320\235\320\276\320\262\320\270\320\271", nullptr));
        open_file->setText(QApplication::translate("MainWindow", "\320\222\321\226\320\264\320\272\321\200\320\270\321\202\320\270", nullptr));
        save_file->setText(QApplication::translate("MainWindow", "\320\227\320\261\320\265\321\200\320\265\320\263\321\202\320\270", nullptr));
        get_button->setText(QApplication::translate("MainWindow", "\320\240\320\276\320\267\321\200\320\260\321\205\321\203\320\262\320\260\321\202\320\270", nullptr));
        Clear_button->setText(QApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\320\270", nullptr));
        dell_button->setText(QApplication::translate("MainWindow", "\320\222\320\270\320\264\320\260\320\273\320\270\321\202\320\270 \321\201\321\200\320\276\320\272\321\203", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\320\222\320\270\321\202\321\200\320\260\321\202\320\270 \320\275\320\260 \320\277\320\276\321\201\321\202\320\260\320\262\320\272\321\203</p></body></html>", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\342\204\226", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\320\222\320\260\321\200\321\202\321\226\321\201\321\202\321\214</p></body></html>", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\320\237\320\276\320\277\320\270\321\202</p></body></html>", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\320\222\320\270\320\261\321\200\320\260\321\202\320\270</p></body></html>", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\320\222\320\270\321\202\321\200\320\260\321\202\320\270 \320\275\320\260 \320\267\320\261\320\265\321\200\321\226\320\263\320\260\320\275\320\275\321\217</p></body></html>", nullptr));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\320\235\320\260\320\267\320\262\320\260 \321\202\320\276\320\262\320\260\321\200\321\203</p></body></html>", nullptr));
        TabNum7->setText(QApplication::translate("MainWindow", "7", nullptr));
        TabCheck4->setText(QString());
#ifndef QT_NO_SHORTCUT
        TabCheck4->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        TabNum5->setText(QApplication::translate("MainWindow", "5", nullptr));
        TabNum3->setText(QApplication::translate("MainWindow", "3", nullptr));
        TabNum4->setText(QApplication::translate("MainWindow", "4", nullptr));
        TabCheck3->setText(QString());
#ifndef QT_NO_SHORTCUT
        TabCheck3->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        TabCheck7->setText(QString());
#ifndef QT_NO_SHORTCUT
        TabCheck7->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        TabNum6->setText(QApplication::translate("MainWindow", "6", nullptr));
        TabCheck1->setText(QString());
#ifndef QT_NO_SHORTCUT
        TabCheck1->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        TabNum1->setText(QApplication::translate("MainWindow", "1", nullptr));
        TabCheck5->setText(QString());
#ifndef QT_NO_SHORTCUT
        TabCheck5->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        TabCheck2->setText(QString());
#ifndef QT_NO_SHORTCUT
        TabCheck2->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        TabNum2->setText(QApplication::translate("MainWindow", "2", nullptr));
        TabCheck6->setText(QString());
#ifndef QT_NO_SHORTCUT
        TabCheck6->setShortcut(QString());
#endif // QT_NO_SHORTCUT
        add_button->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\264\320\260\321\202\320\270 \320\277\321\200\320\276\320\264\321\203\320\272\321\202", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "\320\234\320\276\320\264\320\265\320\273\321\226", nullptr));
        model_1->setText(QApplication::translate("MainWindow", "\320\221\320\265\320\267 \321\203\321\200\320\260\321\205\321\203\320\262\320\260\320\275\320\275\321\217\320\274 \321\202\320\270\320\274\321\207\320\260\321\201\320\276\320\262\320\276\321\227\n"
"\320\262\320\260\321\200\321\202\320\276\321\201\321\202\321\226 \320\263\321\200\320\276\321\210\320\265\320\271", nullptr));
        model_2->setText(QApplication::translate("MainWindow", "\320\222\320\270\320\277\320\273\320\260\321\202\320\260 \320\262\320\270\321\202\321\200\320\260\321\202 \320\275\320\260 \320\267\320\261\320\265\321\200\321\226\320\263\320\260\320\275\320\275\321\217\n"
"\"\320\277\321\200\320\265\320\275\321\203\320\274\320\265\321\200\320\260\320\275\320\264\320\276\"", nullptr));
        model_3->setText(QApplication::translate("MainWindow", "\320\222\320\270\320\277\320\273\320\260\321\202\320\260 \320\262\320\270\321\202\321\200\320\260\321\202 \320\275\320\260 \320\267\320\261\320\265\321\200\321\226\320\263\320\260\320\275\320\275\321\217\n"
"\"\320\277\320\276\321\201\321\202\320\275\321\203\320\274\320\265\321\200\320\260\320\275\320\264\320\276\"", nullptr));
        model_4->setText(QApplication::translate("MainWindow", "\320\222\320\270\320\277\320\273\320\260\321\202\320\260 \320\262\320\270\321\202\321\200\320\260\321\202 \320\275\320\260 \320\267\320\261\320\265\321\200\321\226\320\263\320\260\320\275\320\275\321\217\n"
"\321\203 \321\201\320\265\321\200\320\265\320\264\320\265\320\275\321\226 \321\226\320\275\321\202\320\265\321\200\320\262\320\260\320\273\321\203", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "\320\240\321\226\321\207\320\275\320\260 \321\201\321\202\320\260\320\262\320\272\320\260 \320\277\321\200\320\270\321\200\320\276\321\201\321\202\321\203:", nullptr));
        year_cost->setText(QApplication::translate("MainWindow", "0", nullptr));
        back_button->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\320\206\320\275\321\202\320\265\321\200\320\262\320\260\320\273 \320\267\320\260\320\274\320\276\320\262\320\273\320\265\320\275\320\275\321\217:</p></body></html>", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\320\236\320\261\321\201\321\217\320\263\320\270 \321\202\320\276\320\262\320\260\321\200\321\226\320\262 \320\262 \320\267\320\260\320\274\320\276\320\262\320\273\320\265\320\275\320\275\321\226</p></body></html>", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\320\227\320\260\320\263\320\260\320\273\321\214\320\275\320\260 \320\262\320\260\321\200\321\202\321\226\321\201\321\202\321\214 \320\267\320\260\320\277\320\260\321\201\321\226\320\262:</p></body></html>", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\320\222\320\270\321\202\321\200\320\260\321\202\320\270 \320\275\320\260 \320\267\320\261\320\265\321\200\321\226\320\263\320\260\320\275\320\275\321\217:</p></body></html>", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\320\222\320\270\321\202\321\200\320\260\321\202\320\270 \320\275\320\260 \320\277\320\276\321\201\321\202\320\260\320\262\320\272\321\203:</p></body></html>", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        label_18->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        menu->setTitle(QApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
