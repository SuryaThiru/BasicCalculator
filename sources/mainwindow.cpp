#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <regex>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->lcdNumber->setDigitCount(6);

    //setup to work with keyboard
    ui->pb_0->setShortcut(QKeySequence("0"));
    ui->pb_1->setShortcut(QKeySequence("1"));
    ui->pb_2->setShortcut(QKeySequence("2"));
    ui->pb_3->setShortcut(QKeySequence("3"));
    ui->pb_4->setShortcut(QKeySequence("4"));
    ui->pb_5->setShortcut(QKeySequence("5"));
    ui->pb_6->setShortcut(QKeySequence("6"));
    ui->pb_7->setShortcut(QKeySequence("7"));
    ui->pb_8->setShortcut(QKeySequence("8"));
    ui->pb_9->setShortcut(QKeySequence("9"));
    ui->pb_0->setShortcut(QKeySequence("0"));
    ui->pb_dot->setShortcut(QKeySequence("."));
    ui->pb_C->setShortcut(QKeySequence("DEL"));
    ui->pb_plus->setShortcut(QKeySequence("+"));
    ui->pb_minus->setShortcut(QKeySequence("-"));
    ui->pb_cross->setShortcut(QKeySequence("*"));
    ui->pb_div->setShortcut(QKeySequence("/"));
    ui->pb_equal->setShortcut(QKeySequence("="));

    setFixedSize(339, 445);
}

MainWindow::~MainWindow() {
    delete ui;
}

bool MainWindow::isLCDfull() {
    return m_lcdDisplay.length() == 6;
}

bool MainWindow::isStringValid() {
    std::regex re("-?[[:digit:]]+(\\.([[:digit:]])+)?");

    if (std::regex_match(m_lcdDisplay.toStdString(), re))
        return true;
    else
        return false;
}

void MainWindow::updateLCD(char num) {
    if (isLCDfull())
        return;

    m_lcdDisplay += num;

    ui->lcdNumber->display(m_lcdDisplay);
}


//slots for all buttons
void MainWindow::on_pb_0_clicked() {
    updateLCD('0');
}

void MainWindow::on_pb_1_clicked() {
    updateLCD('1');
}

void MainWindow::on_pb_2_clicked() {
    updateLCD('2');
}

void MainWindow::on_pb_3_clicked() {
    updateLCD('3');
}

void MainWindow::on_pb_4_clicked() {
    updateLCD('4');
}

void MainWindow::on_pb_5_clicked() {
    updateLCD('5');
}

void MainWindow::on_pb_6_clicked() {
    updateLCD('6');
}

void MainWindow::on_pb_7_clicked() {
    updateLCD('7');
}

void MainWindow::on_pb_8_clicked() {
    updateLCD('8');
}

void MainWindow::on_pb_9_clicked() {
    updateLCD('9');
}

void MainWindow::on_pb_dot_clicked() {
    updateLCD('.');
}

void MainWindow::on_pb_C_clicked() {
    ui->lcdNumber->display(0);

    m_lcdDisplay.clear();
    m_calc.reset();
}

void MainWindow::on_pb_plus_clicked() {
    if (!isStringValid()) {
        ui->lcdNumber->display("ERROR");

        m_calc.reset();
        m_lcdDisplay.clear();
        return;
    }

    double val = ui->lcdNumber->value();
    m_calc.setLOperand(val);
    m_calc.setOperator('+');

    m_lcdDisplay.clear();
}


void MainWindow::on_pb_minus_clicked() {
    //allow using negative numbers
    if (m_lcdDisplay.isNull() && !m_calc.isROperandSet()) {
        updateLCD('-');
        return;
    }

    if (!isStringValid()) {
        ui->lcdNumber->display("ERROR");
        return;
    }

    double val = ui->lcdNumber->value();
    m_calc.setLOperand(val);
    m_calc.setOperator('-');

    m_lcdDisplay.clear();
}

void MainWindow::on_pb_cross_clicked() {
    if (!isStringValid()) {
        ui->lcdNumber->display("ERROR");
        return;
    }

    double val = ui->lcdNumber->value();
    m_calc.setLOperand(val);
    m_calc.setOperator('*');

    m_lcdDisplay.clear();
}

void MainWindow::on_pb_div_clicked() {
    if (!isStringValid()) {
        ui->lcdNumber->display("ERROR");
        return;
    }

    double val = ui->lcdNumber->value();
    m_calc.setLOperand(val);
    m_calc.setOperator('/');

    m_lcdDisplay.clear();
}


void MainWindow::on_pb_equal_clicked() {
    if (!isStringValid()) {
        ui->lcdNumber->display("ERROR");
        m_lcdDisplay.clear();
        return;
    }

    if (!m_calc.isROperandSet() && !m_calc.isLOperandSet()) {
        return;
    }

    double val = ui->lcdNumber->value();
    m_calc.setROperand(val);

    try {
        m_calc.calculate();
    }
    catch (const char*) {
        ui->lcdNumber->display("ERROR");
        m_calc.reset();
        m_lcdDisplay.clear();
        return;
    }

    if (m_calc.getResult() < 1000000 && m_calc.getResult() > -100000) { //check for the display size
        ui->lcdNumber->display(m_calc.getResult());
    }
    else {
        ui->lcdNumber->display("ERROR");
        m_lcdDisplay.clear();
    }

    m_calc.reset();
}

