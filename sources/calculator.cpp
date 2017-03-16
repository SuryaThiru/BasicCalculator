#include "calculator.h"

Calculator::Calculator() {
    reset();
}

void Calculator::setLOperand(double val) {
    m_lOperand = val;
    m_lOperand_flag = true;
}

bool Calculator::isLOperandSet() {
    return m_lOperand_flag;
}

void Calculator::setROperand(double val) {
    m_rOperand = val;
    m_rOperand_flag = true;
}

bool Calculator::isROperandSet() {
    return m_rOperand_flag;
}

void Calculator::setOperator(char op) {
    m_operator = op;

    switch (m_operator) {
    case '+':
        operation = &Calculator::add;
        break;
    case '-':
        operation = &Calculator::subtract;
        break;
    case '*':
        operation = &Calculator::multiply;
        break;
    case '/':
        operation = &Calculator::divide;
        break;
    }
}

double Calculator::getResult() {
    return m_result;
}

void Calculator::reset() {
    m_lOperand = 0;
    m_lOperand_flag = false;
    m_rOperand = 0;
    m_rOperand_flag = false;
    m_result = 0;
    m_operator = 0;
}

void Calculator::calculate() {
    (this->*operation)();
}

void Calculator::add() {
    m_result =  m_lOperand + m_rOperand;
}

void Calculator::subtract() {
    m_result =  m_lOperand - m_rOperand;
}

void Calculator::multiply() {
    m_result =  m_lOperand * m_rOperand;
}

void Calculator::divide() {
    if (m_rOperand == 0)
        throw "INF"; //floating point exception

    m_result = m_lOperand / m_rOperand;
}
