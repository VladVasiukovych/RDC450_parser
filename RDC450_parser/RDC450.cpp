#include "RDC450.h"
#include "ui_RDC450.h"

//======================================================= Глобальные перменные
QString FileName;

const QString BasicDataKey[] = {"RDCN",         //массив ключей BasicDataKey
                                "RDCNRec",
                                "EngineType",
                                "EngineN",
                                "User",
                                "Logged",
                                "Comment",
                                "ND450N"};

const QString FlyDataKey[] = {"FlightN",        //массив ключей FlyDataKey
                              "APTakeOf",
                              "APArrive",
                              "FlightDate",
                              "FlightStartTime",
                              "BoardN",
                              "Type"};

//=======================================================
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    BasicDataEdit = QVector<QLineEdit*> {    //массив полей BasicDataKey
            ui->RDCN_Edit,
            ui->RDCNRec_Edit,
            ui->EngineType_Edit,
            ui->EngineN_Edit,
            ui->User_Edit,
            ui->Logged_Edit,
            ui->Comment_Edit,
            ui->ND450N_Edit };

    FlyDataEdit = QVector<QLineEdit*> {     //массив полей FlyDataKey
            ui->FlightN_Edit,
            ui->APTakeOf_Edit,
            ui->APArrive_Edit,
            ui->FlightDate_Edit,
            ui->FlightStartTime_Edit,
            ui->BoardN_Edit,
            ui->Type_Edit };
}

MainWindow::~MainWindow()
{
    delete ui;
}


//====================================================================================================================
void MainWindow::on_OpenFile_Button_clicked()
{
    int CriticalFlag{0};
    FileName = QFileDialog::getOpenFileName(this, tr("Open File"), "/D:/Desktop/RDC450_parser/RDC450.ini", tr("ini (*.ini)"));

    if (FileName == nullptr) {                  //прекратить, если файл не открыт
        ui->Save_Button->setEnabled (false);           //сделать неактивной кнопку сохранения
        ui->UpdateData_Button->setEnabled (false);     //сделать активной кнопку Обновить данные
        return;
    }
    ui->Save_Button->setEnabled (true);     //сделать активной кнопку сохранения

    QSettings sett(FileName, QSettings::IniFormat);
    sett.setIniCodec (QTextCodec::codecForName("UTF-8"));

    //-----------------------------------------------------------------------------
    for (int i{0}; i < BasicDataEdit.size (); i++){
        if ( sett.contains("BasicData/" + BasicDataKey[i]) )
        {
            BasicDataEdit[i]->setText (sett.value("BasicData/" + BasicDataKey[i], "").toString());
        }
        else {
            BasicDataEdit[i]->setText (sett.value("BasicData/" + BasicDataKey[i], "Ключ отсутствует!").toString());
            CriticalFlag = 1;
        }
    }
    //-----------------------------------------------------------------------------
    for (int i{0}; i < FlyDataEdit.size (); i++){
        if ( sett.contains("FlyData/" + FlyDataKey[i]) )
        {
            FlyDataEdit[i]->setText (sett.value("FlyData/" + FlyDataKey[i], "").toString());
        }
        else {
            FlyDataEdit[i]->setText (sett.value("FlyData/" + FlyDataKey[i], "Ключ отсутствует!").toString());
            CriticalFlag = 1;
        }
    }
    //-----------------------------------------------------------------------------
    if ( sett.contains("Config/ShowFlightWin") )
    {
        ui->ShowFlightWin_Edit->setText (sett.value("Config/ShowFlightWin", "").toString());
    }
    else {
        ui->ShowFlightWin_Edit->setText (sett.value("Config/ShowFlightWin", "Ключ отсутствует!").toString());
        CriticalFlag = 1;
    }
    //-----------------------------------------------------------------------------


    if(CriticalFlag)
        QMessageBox::critical (this, "Открытие файла", "У файла отсутсвуют ключи!");
    else
        ui->UpdateData_Button->setEnabled (true);     //сделать активной кнопку Обновить данные
}


//====================================================================================================================
void MainWindow::on_UpdateData_Button_clicked()
{
    QSettings sett(FileName, QSettings::IniFormat);
    sett.setIniCodec (QTextCodec::codecForName("UTF-8"));

    //-----------------------------------------------------------------------------
    for (int i{0}; i < BasicDataEdit.size (); i++)
    {
        BasicDataEdit[i]->setText (sett.value("BasicData/" + BasicDataKey[i], "").toString());
    }
    //-----------------------------------------------------------------------------
    for (int i{0}; i < FlyDataEdit.size (); i++)
    {
        FlyDataEdit[i]->setText (sett.value("FlyData/" + FlyDataKey[i], "").toString());
    }
    //-----------------------------------------------------------------------------
    ui->ShowFlightWin_Edit->setText (sett.value("Config/ShowFlightWin", "").toString());
}


//====================================================================================================================
void MainWindow::on_Save_Button_clicked()
{
    QSettings sett(FileName, QSettings::IniFormat);
    sett.setIniCodec (QTextCodec::codecForName("UTF-8"));

    ui->UpdateData_Button->setEnabled (true);     //сделать активной кнопку Обновить данные


    //-----------------------------------------------------------------------------
    for (int i{0}; i < BasicDataEdit.size (); i++)
    {
        sett.setValue("BasicData/" + BasicDataKey[i], BasicDataEdit[i]->text ());
    }
    //-----------------------------------------------------------------------------
    for (int i{0}; i < FlyDataEdit.size (); i++)
    {
        sett.setValue("FlyData/" + FlyDataKey[i], FlyDataEdit[i]->text ());
    }
    //-----------------------------------------------------------------------------
    sett.setValue("Config/ShowFlightWin", ui->ShowFlightWin_Edit->text ());

}















