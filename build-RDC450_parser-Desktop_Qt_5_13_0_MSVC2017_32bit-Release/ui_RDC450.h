/********************************************************************************
** Form generated from reading UI file 'RDC450.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RDC450_H
#define UI_RDC450_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *BasicData;
    QLabel *RDCN_label;
    QPushButton *RDCN_clear_Button;
    QLabel *RDCNRec_label;
    QPushButton *RDCNRec_clear_Button;
    QLineEdit *RDCNRec_Edit;
    QLabel *EngineType_label;
    QPushButton *EngineType_clear_Button;
    QLineEdit *EngineType_Edit;
    QLabel *EngineN_label;
    QPushButton *EngineN_clear_Button;
    QLineEdit *EngineN_Edit;
    QLabel *User_label;
    QPushButton *User_clear_Button;
    QLineEdit *User_Edit;
    QLabel *Logged_label;
    QPushButton *Logged_clear_Button;
    QLineEdit *Logged_Edit;
    QLabel *Comment_label;
    QPushButton *Comment_clear_Button;
    QLineEdit *Comment_Edit;
    QLabel *ND450N_label;
    QPushButton *ND450N_clear_Butto;
    QLineEdit *ND450N_Edit;
    QLineEdit *RDCN_Edit;
    QGroupBox *FlyData;
    QLineEdit *FlightN_Edit;
    QPushButton *FlightN_clear_Button;
    QLabel *FlightN_label;
    QLineEdit *APTakeOf_Edit;
    QLabel *APTakeOf_label;
    QPushButton *APTakeOf_clear_Button;
    QLineEdit *APArrive_Edit;
    QLabel *APArrive_label;
    QPushButton *APArrive_clear_Button;
    QLabel *FlightStartTime_label;
    QLineEdit *FlightDate_Edit;
    QPushButton *BoardN_clear_Button;
    QLineEdit *FlightStartTime_Edit;
    QLineEdit *BoardN_Edit;
    QLabel *FlightDate_label;
    QPushButton *FlightStartTime_clear_Button;
    QLabel *BoardN_label;
    QPushButton *FlightDate_clear_Button;
    QLabel *Type_label;
    QPushButton *Type_clear_Button;
    QLineEdit *Type_Edit;
    QGroupBox *Config;
    QPushButton *ShowFlightWin_clear_Button;
    QLabel *ShowFlightWin_label;
    QLineEdit *ShowFlightWin_Edit;
    QPushButton *Save_Button;
    QPushButton *OpenFile_Button;
    QPushButton *UpdateData_Button;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(1060, 820);
        MainWindow->setMinimumSize(QSize(1060, 820));
        MainWindow->setMaximumSize(QSize(1060, 820));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        BasicData = new QGroupBox(centralWidget);
        BasicData->setObjectName(QString::fromUtf8("BasicData"));
        BasicData->setGeometry(QRect(10, 20, 771, 351));
        QFont font;
        font.setPointSize(10);
        BasicData->setFont(font);
        RDCN_label = new QLabel(BasicData);
        RDCN_label->setObjectName(QString::fromUtf8("RDCN_label"));
        RDCN_label->setGeometry(QRect(30, 30, 130, 30));
        QFont font1;
        font1.setPointSize(12);
        RDCN_label->setFont(font1);
        RDCN_clear_Button = new QPushButton(BasicData);
        RDCN_clear_Button->setObjectName(QString::fromUtf8("RDCN_clear_Button"));
        RDCN_clear_Button->setGeometry(QRect(670, 30, 70, 30));
        RDCNRec_label = new QLabel(BasicData);
        RDCNRec_label->setObjectName(QString::fromUtf8("RDCNRec_label"));
        RDCNRec_label->setGeometry(QRect(30, 70, 130, 30));
        RDCNRec_label->setFont(font1);
        RDCNRec_clear_Button = new QPushButton(BasicData);
        RDCNRec_clear_Button->setObjectName(QString::fromUtf8("RDCNRec_clear_Button"));
        RDCNRec_clear_Button->setGeometry(QRect(670, 70, 70, 30));
        RDCNRec_Edit = new QLineEdit(BasicData);
        RDCNRec_Edit->setObjectName(QString::fromUtf8("RDCNRec_Edit"));
        RDCNRec_Edit->setGeometry(QRect(170, 70, 480, 30));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setWeight(50);
        RDCNRec_Edit->setFont(font2);
        EngineType_label = new QLabel(BasicData);
        EngineType_label->setObjectName(QString::fromUtf8("EngineType_label"));
        EngineType_label->setGeometry(QRect(30, 110, 130, 30));
        EngineType_label->setFont(font1);
        EngineType_clear_Button = new QPushButton(BasicData);
        EngineType_clear_Button->setObjectName(QString::fromUtf8("EngineType_clear_Button"));
        EngineType_clear_Button->setGeometry(QRect(670, 110, 70, 30));
        EngineType_Edit = new QLineEdit(BasicData);
        EngineType_Edit->setObjectName(QString::fromUtf8("EngineType_Edit"));
        EngineType_Edit->setGeometry(QRect(170, 110, 480, 30));
        EngineType_Edit->setFont(font2);
        EngineN_label = new QLabel(BasicData);
        EngineN_label->setObjectName(QString::fromUtf8("EngineN_label"));
        EngineN_label->setGeometry(QRect(30, 150, 130, 30));
        EngineN_label->setFont(font1);
        EngineN_clear_Button = new QPushButton(BasicData);
        EngineN_clear_Button->setObjectName(QString::fromUtf8("EngineN_clear_Button"));
        EngineN_clear_Button->setGeometry(QRect(670, 150, 70, 30));
        EngineN_Edit = new QLineEdit(BasicData);
        EngineN_Edit->setObjectName(QString::fromUtf8("EngineN_Edit"));
        EngineN_Edit->setGeometry(QRect(170, 150, 480, 30));
        EngineN_Edit->setFont(font2);
        User_label = new QLabel(BasicData);
        User_label->setObjectName(QString::fromUtf8("User_label"));
        User_label->setGeometry(QRect(30, 190, 130, 30));
        User_label->setFont(font1);
        User_clear_Button = new QPushButton(BasicData);
        User_clear_Button->setObjectName(QString::fromUtf8("User_clear_Button"));
        User_clear_Button->setGeometry(QRect(670, 190, 70, 30));
        User_Edit = new QLineEdit(BasicData);
        User_Edit->setObjectName(QString::fromUtf8("User_Edit"));
        User_Edit->setGeometry(QRect(170, 190, 480, 30));
        User_Edit->setFont(font2);
        Logged_label = new QLabel(BasicData);
        Logged_label->setObjectName(QString::fromUtf8("Logged_label"));
        Logged_label->setGeometry(QRect(30, 230, 130, 30));
        Logged_label->setFont(font1);
        Logged_clear_Button = new QPushButton(BasicData);
        Logged_clear_Button->setObjectName(QString::fromUtf8("Logged_clear_Button"));
        Logged_clear_Button->setGeometry(QRect(670, 230, 70, 30));
        Logged_Edit = new QLineEdit(BasicData);
        Logged_Edit->setObjectName(QString::fromUtf8("Logged_Edit"));
        Logged_Edit->setGeometry(QRect(170, 230, 480, 30));
        Logged_Edit->setFont(font2);
        Comment_label = new QLabel(BasicData);
        Comment_label->setObjectName(QString::fromUtf8("Comment_label"));
        Comment_label->setGeometry(QRect(30, 270, 130, 30));
        Comment_label->setFont(font1);
        Comment_clear_Button = new QPushButton(BasicData);
        Comment_clear_Button->setObjectName(QString::fromUtf8("Comment_clear_Button"));
        Comment_clear_Button->setGeometry(QRect(670, 270, 70, 30));
        Comment_Edit = new QLineEdit(BasicData);
        Comment_Edit->setObjectName(QString::fromUtf8("Comment_Edit"));
        Comment_Edit->setGeometry(QRect(170, 270, 480, 30));
        Comment_Edit->setFont(font2);
        ND450N_label = new QLabel(BasicData);
        ND450N_label->setObjectName(QString::fromUtf8("ND450N_label"));
        ND450N_label->setGeometry(QRect(30, 310, 130, 30));
        ND450N_label->setFont(font1);
        ND450N_clear_Butto = new QPushButton(BasicData);
        ND450N_clear_Butto->setObjectName(QString::fromUtf8("ND450N_clear_Butto"));
        ND450N_clear_Butto->setGeometry(QRect(670, 310, 70, 30));
        ND450N_Edit = new QLineEdit(BasicData);
        ND450N_Edit->setObjectName(QString::fromUtf8("ND450N_Edit"));
        ND450N_Edit->setGeometry(QRect(170, 310, 480, 30));
        ND450N_Edit->setFont(font2);
        RDCN_Edit = new QLineEdit(BasicData);
        RDCN_Edit->setObjectName(QString::fromUtf8("RDCN_Edit"));
        RDCN_Edit->setGeometry(QRect(170, 30, 480, 30));
        RDCN_Edit->setFont(font2);
        FlyData = new QGroupBox(centralWidget);
        FlyData->setObjectName(QString::fromUtf8("FlyData"));
        FlyData->setGeometry(QRect(10, 390, 771, 321));
        FlyData->setFont(font);
        FlightN_Edit = new QLineEdit(FlyData);
        FlightN_Edit->setObjectName(QString::fromUtf8("FlightN_Edit"));
        FlightN_Edit->setGeometry(QRect(179, 30, 461, 30));
        FlightN_Edit->setFont(font2);
        FlightN_clear_Button = new QPushButton(FlyData);
        FlightN_clear_Button->setObjectName(QString::fromUtf8("FlightN_clear_Button"));
        FlightN_clear_Button->setGeometry(QRect(660, 30, 70, 30));
        FlightN_label = new QLabel(FlyData);
        FlightN_label->setObjectName(QString::fromUtf8("FlightN_label"));
        FlightN_label->setGeometry(QRect(9, 30, 170, 30));
        FlightN_label->setFont(font1);
        APTakeOf_Edit = new QLineEdit(FlyData);
        APTakeOf_Edit->setObjectName(QString::fromUtf8("APTakeOf_Edit"));
        APTakeOf_Edit->setGeometry(QRect(179, 70, 461, 30));
        APTakeOf_Edit->setFont(font2);
        APTakeOf_label = new QLabel(FlyData);
        APTakeOf_label->setObjectName(QString::fromUtf8("APTakeOf_label"));
        APTakeOf_label->setGeometry(QRect(9, 70, 170, 30));
        APTakeOf_label->setFont(font1);
        APTakeOf_clear_Button = new QPushButton(FlyData);
        APTakeOf_clear_Button->setObjectName(QString::fromUtf8("APTakeOf_clear_Button"));
        APTakeOf_clear_Button->setGeometry(QRect(660, 70, 70, 30));
        APArrive_Edit = new QLineEdit(FlyData);
        APArrive_Edit->setObjectName(QString::fromUtf8("APArrive_Edit"));
        APArrive_Edit->setGeometry(QRect(179, 110, 461, 30));
        APArrive_Edit->setFont(font2);
        APArrive_label = new QLabel(FlyData);
        APArrive_label->setObjectName(QString::fromUtf8("APArrive_label"));
        APArrive_label->setGeometry(QRect(9, 110, 170, 30));
        APArrive_label->setFont(font1);
        APArrive_clear_Button = new QPushButton(FlyData);
        APArrive_clear_Button->setObjectName(QString::fromUtf8("APArrive_clear_Button"));
        APArrive_clear_Button->setGeometry(QRect(660, 110, 70, 30));
        FlightStartTime_label = new QLabel(FlyData);
        FlightStartTime_label->setObjectName(QString::fromUtf8("FlightStartTime_label"));
        FlightStartTime_label->setGeometry(QRect(9, 190, 170, 30));
        FlightStartTime_label->setFont(font1);
        FlightDate_Edit = new QLineEdit(FlyData);
        FlightDate_Edit->setObjectName(QString::fromUtf8("FlightDate_Edit"));
        FlightDate_Edit->setGeometry(QRect(179, 150, 461, 30));
        FlightDate_Edit->setFont(font2);
        BoardN_clear_Button = new QPushButton(FlyData);
        BoardN_clear_Button->setObjectName(QString::fromUtf8("BoardN_clear_Button"));
        BoardN_clear_Button->setGeometry(QRect(660, 230, 70, 30));
        FlightStartTime_Edit = new QLineEdit(FlyData);
        FlightStartTime_Edit->setObjectName(QString::fromUtf8("FlightStartTime_Edit"));
        FlightStartTime_Edit->setGeometry(QRect(179, 190, 461, 30));
        FlightStartTime_Edit->setFont(font2);
        BoardN_Edit = new QLineEdit(FlyData);
        BoardN_Edit->setObjectName(QString::fromUtf8("BoardN_Edit"));
        BoardN_Edit->setGeometry(QRect(179, 230, 461, 30));
        BoardN_Edit->setFont(font2);
        FlightDate_label = new QLabel(FlyData);
        FlightDate_label->setObjectName(QString::fromUtf8("FlightDate_label"));
        FlightDate_label->setGeometry(QRect(9, 150, 170, 30));
        FlightDate_label->setFont(font1);
        FlightStartTime_clear_Button = new QPushButton(FlyData);
        FlightStartTime_clear_Button->setObjectName(QString::fromUtf8("FlightStartTime_clear_Button"));
        FlightStartTime_clear_Button->setGeometry(QRect(660, 190, 70, 30));
        BoardN_label = new QLabel(FlyData);
        BoardN_label->setObjectName(QString::fromUtf8("BoardN_label"));
        BoardN_label->setGeometry(QRect(9, 230, 170, 30));
        BoardN_label->setFont(font1);
        FlightDate_clear_Button = new QPushButton(FlyData);
        FlightDate_clear_Button->setObjectName(QString::fromUtf8("FlightDate_clear_Button"));
        FlightDate_clear_Button->setGeometry(QRect(660, 150, 70, 30));
        Type_label = new QLabel(FlyData);
        Type_label->setObjectName(QString::fromUtf8("Type_label"));
        Type_label->setGeometry(QRect(10, 270, 170, 30));
        Type_label->setFont(font1);
        Type_clear_Button = new QPushButton(FlyData);
        Type_clear_Button->setObjectName(QString::fromUtf8("Type_clear_Button"));
        Type_clear_Button->setGeometry(QRect(661, 270, 70, 30));
        Type_Edit = new QLineEdit(FlyData);
        Type_Edit->setObjectName(QString::fromUtf8("Type_Edit"));
        Type_Edit->setGeometry(QRect(180, 270, 461, 30));
        Type_Edit->setFont(font2);
        Config = new QGroupBox(centralWidget);
        Config->setObjectName(QString::fromUtf8("Config"));
        Config->setGeometry(QRect(10, 730, 771, 81));
        Config->setFont(font);
        ShowFlightWin_clear_Button = new QPushButton(Config);
        ShowFlightWin_clear_Button->setObjectName(QString::fromUtf8("ShowFlightWin_clear_Button"));
        ShowFlightWin_clear_Button->setGeometry(QRect(670, 30, 70, 30));
        ShowFlightWin_label = new QLabel(Config);
        ShowFlightWin_label->setObjectName(QString::fromUtf8("ShowFlightWin_label"));
        ShowFlightWin_label->setGeometry(QRect(30, 30, 160, 30));
        ShowFlightWin_label->setFont(font1);
        ShowFlightWin_Edit = new QLineEdit(Config);
        ShowFlightWin_Edit->setObjectName(QString::fromUtf8("ShowFlightWin_Edit"));
        ShowFlightWin_Edit->setGeometry(QRect(199, 30, 451, 30));
        ShowFlightWin_Edit->setFont(font2);
        Save_Button = new QPushButton(centralWidget);
        Save_Button->setObjectName(QString::fromUtf8("Save_Button"));
        Save_Button->setEnabled(false);
        Save_Button->setGeometry(QRect(800, 310, 140, 60));
        QFont font3;
        font3.setPointSize(14);
        Save_Button->setFont(font3);
        Save_Button->setAcceptDrops(false);
        Save_Button->setAutoFillBackground(false);
        Save_Button->setAutoDefault(false);
        Save_Button->setFlat(false);
        OpenFile_Button = new QPushButton(centralWidget);
        OpenFile_Button->setObjectName(QString::fromUtf8("OpenFile_Button"));
        OpenFile_Button->setGeometry(QRect(800, 30, 140, 60));
        OpenFile_Button->setFont(font3);
        UpdateData_Button = new QPushButton(centralWidget);
        UpdateData_Button->setObjectName(QString::fromUtf8("UpdateData_Button"));
        UpdateData_Button->setEnabled(false);
        UpdateData_Button->setGeometry(QRect(800, 170, 241, 60));
        UpdateData_Button->setFont(font3);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);
        QObject::connect(ND450N_clear_Butto, SIGNAL(clicked()), ND450N_Edit, SLOT(clear()));
        QObject::connect(Comment_clear_Button, SIGNAL(clicked()), Comment_Edit, SLOT(clear()));
        QObject::connect(Logged_clear_Button, SIGNAL(clicked()), Logged_Edit, SLOT(clear()));
        QObject::connect(User_clear_Button, SIGNAL(clicked()), User_Edit, SLOT(clear()));
        QObject::connect(EngineN_clear_Button, SIGNAL(clicked()), EngineN_Edit, SLOT(clear()));
        QObject::connect(RDCNRec_clear_Button, SIGNAL(clicked()), RDCNRec_Edit, SLOT(clear()));
        QObject::connect(RDCN_clear_Button, SIGNAL(clicked()), RDCN_Edit, SLOT(clear()));
        QObject::connect(Type_clear_Button, SIGNAL(clicked()), Type_Edit, SLOT(clear()));
        QObject::connect(BoardN_clear_Button, SIGNAL(clicked()), BoardN_Edit, SLOT(clear()));
        QObject::connect(FlightStartTime_clear_Button, SIGNAL(clicked(bool)), FlightStartTime_Edit, SLOT(clear()));
        QObject::connect(FlightDate_clear_Button, SIGNAL(clicked()), FlightDate_Edit, SLOT(clear()));
        QObject::connect(APArrive_clear_Button, SIGNAL(clicked()), APArrive_Edit, SLOT(clear()));
        QObject::connect(APTakeOf_clear_Button, SIGNAL(clicked()), APTakeOf_Edit, SLOT(clear()));
        QObject::connect(FlightN_clear_Button, SIGNAL(clicked()), FlightN_Edit, SLOT(clear()));
        QObject::connect(ShowFlightWin_clear_Button, SIGNAL(clicked()), ShowFlightWin_Edit, SLOT(clear()));
        QObject::connect(EngineType_clear_Button, SIGNAL(clicked()), EngineType_Edit, SLOT(clear()));

        Save_Button->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "RDC450_parser", nullptr));
        BasicData->setTitle(QCoreApplication::translate("MainWindow", "BasicData", nullptr));
        RDCN_label->setText(QCoreApplication::translate("MainWindow", "RDCN", nullptr));
        RDCN_clear_Button->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        RDCNRec_label->setText(QCoreApplication::translate("MainWindow", "RDCNRec", nullptr));
        RDCNRec_clear_Button->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        RDCNRec_Edit->setText(QString());
        EngineType_label->setText(QCoreApplication::translate("MainWindow", "EngineType", nullptr));
        EngineType_clear_Button->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        EngineType_Edit->setText(QString());
        EngineN_label->setText(QCoreApplication::translate("MainWindow", "EngineN", nullptr));
        EngineN_clear_Button->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        EngineN_Edit->setText(QString());
        User_label->setText(QCoreApplication::translate("MainWindow", "User", nullptr));
        User_clear_Button->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        User_Edit->setText(QString());
        Logged_label->setText(QCoreApplication::translate("MainWindow", "Logged", nullptr));
        Logged_clear_Button->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        Logged_Edit->setText(QString());
        Comment_label->setText(QCoreApplication::translate("MainWindow", "Comment", nullptr));
        Comment_clear_Button->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        Comment_Edit->setText(QString());
        ND450N_label->setText(QCoreApplication::translate("MainWindow", "ND450N", nullptr));
        ND450N_clear_Butto->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        ND450N_Edit->setText(QString());
        RDCN_Edit->setText(QString());
        FlyData->setTitle(QCoreApplication::translate("MainWindow", "FlyData", nullptr));
        FlightN_Edit->setText(QString());
        FlightN_clear_Button->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        FlightN_label->setText(QCoreApplication::translate("MainWindow", "FlightN", nullptr));
        APTakeOf_Edit->setText(QString());
        APTakeOf_label->setText(QCoreApplication::translate("MainWindow", "APTakeOf", nullptr));
        APTakeOf_clear_Button->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        APArrive_Edit->setText(QString());
        APArrive_label->setText(QCoreApplication::translate("MainWindow", "APArrive", nullptr));
        APArrive_clear_Button->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        FlightStartTime_label->setText(QCoreApplication::translate("MainWindow", "FlightStartTime", nullptr));
        FlightDate_Edit->setText(QString());
        BoardN_clear_Button->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        FlightStartTime_Edit->setText(QString());
        BoardN_Edit->setText(QString());
        FlightDate_label->setText(QCoreApplication::translate("MainWindow", "FlightDate", nullptr));
        FlightStartTime_clear_Button->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        BoardN_label->setText(QCoreApplication::translate("MainWindow", "BoardN", nullptr));
        FlightDate_clear_Button->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        Type_label->setText(QCoreApplication::translate("MainWindow", "Type", nullptr));
        Type_clear_Button->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        Type_Edit->setText(QString());
        Config->setTitle(QCoreApplication::translate("MainWindow", "Config", nullptr));
        ShowFlightWin_clear_Button->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        ShowFlightWin_label->setText(QCoreApplication::translate("MainWindow", "ShowFlightWin", nullptr));
        ShowFlightWin_Edit->setText(QString());
        Save_Button->setText(QCoreApplication::translate("MainWindow", "SAVE", nullptr));
        OpenFile_Button->setText(QCoreApplication::translate("MainWindow", "Open File", nullptr));
        UpdateData_Button->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RDC450_H
