#ifndef CALCULATOR_H
#define CALCULATOR_HS

class Calculator {
    double m_lOperand;
    bool m_lOperand_flag;
    double m_rOperand;
    bool m_rOperand_flag;
    char m_operator;
    double m_result;

public:
    Calculator();

    void setLOperand(double val);
    bool isLOperandSet();
    void setROperand(double val);
    bool isROperandSet();
    void setOperator(char op);
    double getResult();

    void calculate();
    void reset();

    void (Calculator::*operation)();

    void add();
    void subtract();
    void multiply();
    void divide();
};

#endif // CALCULATOR_H
