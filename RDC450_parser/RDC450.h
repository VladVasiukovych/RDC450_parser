#ifndef RDC450_H
#define RDC450_H

#include <QApplication>
#include <QMainWindow>
#include <QSettings>
#include <QString>
#include <QMessageBox>
#include <QFileDialog>
#include <QTextCodec>

//======================================================= Глобальные перменные
extern QString FileName;
//=======================================================

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_OpenFile_Button_clicked();

    void on_Save_Button_clicked();

    void on_UpdateData_Button_clicked();

private:
    Ui::MainWindow *ui;

    QVector<QLineEdit*> BasicDataEdit;
    QVector<QLineEdit*> FlyDataEdit;
};

#endif // RDC450_H
