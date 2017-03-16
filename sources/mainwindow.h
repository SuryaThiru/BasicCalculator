#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include "calculator.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    Ui::MainWindow *ui;
    QString m_lcdDisplay;

    Calculator m_calc;


public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void updateLCD(char num);
    bool isLCDfull();
    bool isStringValid();

private slots:
    void on_pb_0_clicked();
    void on_pb_1_clicked();
    void on_pb_2_clicked();
    void on_pb_3_clicked();
    void on_pb_4_clicked();
    void on_pb_5_clicked();
    void on_pb_6_clicked();
    void on_pb_7_clicked();
    void on_pb_8_clicked();
    void on_pb_9_clicked();
    void on_pb_dot_clicked();
    void on_pb_C_clicked();
    void on_pb_plus_clicked();
    void on_pb_minus_clicked();
    void on_pb_cross_clicked();
    void on_pb_div_clicked();
    void on_pb_equal_clicked();
};

#endif // MAINWINDOW_H
