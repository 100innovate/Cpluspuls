#include "calculator.h"

calculator::calculator(QWidget *parent)
    : QWidget(parent),left(0)
{

    display1 = new QLineEdit("");

    display1->setReadOnly(true);
    display1->setAlignment(Qt::AlignRight);
    display1->setMaxLength(100);


    display2 = new QLineEdit("");

    display2->setReadOnly(true);
    display2->setAlignment(Qt::AlignRight);
    display2->setMaxLength(100);

    QFont font = display2->font();
    font.setPointSize(font.pointSize() + 8);
    display2->setFont(font);

    // Horizontal layout with 3 buttons
    QHBoxLayout *hLayout5 = new QHBoxLayout;
    QPushButton *sin = new QPushButton("sin");
    QPushButton *cos = new QPushButton("cos");
    QPushButton *pow = new QPushButton("x^n");
    QPushButton *sqrt = new QPushButton("sqrt");
    hLayout5->addWidget(sin);
    hLayout5->addWidget(cos);
    hLayout5->addWidget(pow);
    hLayout5->addWidget(sqrt);

    // Horizontal layout with 3 buttons
    QHBoxLayout *hLayout0 = new QHBoxLayout;
    QPushButton *log = new QPushButton("log");
    QPushButton *left = new QPushButton("(");
    QPushButton *right = new QPushButton(")");
    QPushButton *divide = new QPushButton("/");
    hLayout0->addWidget(log);
    hLayout0->addWidget(left);
    hLayout0->addWidget(right);
    hLayout0->addWidget(divide);

    // Horizontal layout with 3 buttons
    QHBoxLayout *hLayout1 = new QHBoxLayout;
    QPushButton *num1 = new QPushButton("1");
    QPushButton *num2 = new QPushButton("2");
    QPushButton *num3 = new QPushButton("3");
    QPushButton *multiply = new QPushButton("*");
    hLayout1->addWidget(num1);
    hLayout1->addWidget(num2);
    hLayout1->addWidget(num3);
    hLayout1->addWidget(multiply);

    QHBoxLayout *hLayout2 = new QHBoxLayout;
    QPushButton *num4 = new QPushButton("4");
    QPushButton *num5 = new QPushButton("5");
    QPushButton *num6 = new QPushButton("6");
    QPushButton *minus = new QPushButton("-");
    hLayout2->addWidget(num4);
    hLayout2->addWidget(num5);
    hLayout2->addWidget(num6);
    hLayout2->addWidget(minus);

    QHBoxLayout *hLayout3 = new QHBoxLayout;
    QPushButton *num7 = new QPushButton("7");
    QPushButton *num8 = new QPushButton("8");
    QPushButton *num9 = new QPushButton("9");
    QPushButton *plus = new QPushButton("+");
    hLayout3->addWidget(num7);
    hLayout3->addWidget(num8);
    hLayout3->addWidget(num9);
    hLayout3->addWidget(plus);

    QHBoxLayout *hLayout4 = new QHBoxLayout;
    QPushButton *clear = new QPushButton("C");
    QPushButton *num0 = new QPushButton("0");
    QPushButton *point = new QPushButton(".");
    QPushButton *equal = new QPushButton("=");
    hLayout4->addWidget(clear);
    hLayout4->addWidget(num0);
    hLayout4->addWidget(point);
    hLayout4->addWidget(equal);

    //display1->setText("helloworld");

    // Outer Layer
    QVBoxLayout *mainLayout = new QVBoxLayout;

    // Add the previous two inner layouts
    mainLayout->addWidget(display1);
    mainLayout->addWidget(display2);
    mainLayout->addLayout(hLayout5);
    mainLayout->addLayout(hLayout0);
    mainLayout->addLayout(hLayout1);
    mainLayout->addLayout(hLayout2);
    mainLayout->addLayout(hLayout3);
    mainLayout->addLayout(hLayout4);

    connect(num0, SIGNAL(clicked()),this,SLOT(click_0()));
    connect(num1, SIGNAL(clicked()),this,SLOT(click_1()));
    connect(num2, SIGNAL(clicked()),this,SLOT(click_2()));
    connect(num3, SIGNAL(clicked()),this,SLOT(click_3()));
    connect(num4, SIGNAL(clicked()),this,SLOT(click_4()));
    connect(num5, SIGNAL(clicked()),this,SLOT(click_5()));
    connect(num6, SIGNAL(clicked()),this,SLOT(click_6()));
    connect(num7, SIGNAL(clicked()),this,SLOT(click_7()));
    connect(num8, SIGNAL(clicked()),this,SLOT(click_8()));
    connect(num9, SIGNAL(clicked()),this,SLOT(click_9()));

    connect(point, SIGNAL(clicked()),this,SLOT(click_dot()));

    connect(sin, SIGNAL(clicked()),this,SLOT(click_sin()));
    connect(cos, SIGNAL(clicked()),this,SLOT(click_cos()));
    connect(log, SIGNAL(clicked()),this,SLOT(click_log()));

    connect(plus, SIGNAL(clicked()),this,SLOT(click_plus()));
    connect(minus, SIGNAL(clicked()),this,SLOT(click_minus()));
    connect(multiply, SIGNAL(clicked()),this,SLOT(click_multiply()));
    connect(divide, SIGNAL(clicked()),this,SLOT(click_divide()));

    connect(pow, SIGNAL(clicked()),this,SLOT(click_pow()));
    connect(sqrt, SIGNAL(clicked()),this,SLOT(click_sqrt()));
    connect(clear, SIGNAL(clicked()),this,SLOT(click_clear()));

    connect(left, SIGNAL(clicked()),this,SLOT(click_left()));
    connect(right, SIGNAL(clicked()),this,SLOT(click_right()));

    connect(equal, SIGNAL(clicked()),this,SLOT(click_equal()));

    setLayout(mainLayout);
    setWindowTitle(tr("Calculator"));


}

calculator::~calculator()
{

}

void calculator::click_1()
{
    str1 += '1';
    display2->setText(str1);
}

void calculator::click_2()
{
    str1 += '2';
    display2->setText(str1);
}

void calculator::click_3()
{
    str1 += '3';
    display2->setText(str1);
}

void calculator::click_4()
{
    str1 += '4';
    display2->setText(str1);
}

void calculator::click_5()
{
    str1 += '5';
    display2->setText(str1);
}

void calculator::click_6()
{
    str1 += '6';
    display2->setText(str1);
}

void calculator::click_7()
{
    str1 += '7';
    display2->setText(str1);
}

void calculator::click_8()
{
    str1 += '8';
    display2->setText(str1);
}

void calculator::click_9()
{
    str1 += '9';
    display2->setText(str1);
}

void calculator::click_0()
{
    str1 += '0';
    display2->setText(str1);
}

void calculator::click_plus()
{
    if (!str1.isEmpty()) {
        str2 += str1;
        str2 += '+';
        str1.clear();
    }
    else if (str2.isEmpty ()|| *(str2.end()-1) == '(') {
        str2 += "0+";
    }
    else if (*(str2.end()-1) == '+' || *(str2.end()-1) == '-' || *(str2.end()-1) == '*' || *(str2.end()-1) == '/' || *(str2.end()-1) == '^') {
        *(str2.end()-1) = '+';
    }
    else str2 += '+';

    display2->setText(str1);
    display1->setText(str2);
}

void calculator::click_minus()
{
    if (!str1.isEmpty()) {
        str2 += str1;
        str2 += '-';
        str1.clear();
    }
    else if (str2.isEmpty ()|| *(str2.end()-1) == '(') {
        str2 += "0-";
    }
    else if (*(str2.end()-1) == '+' || *(str2.end()-1) == '-' || *(str2.end()-1) == '*' || *(str2.end()-1) == '/'|| *(str2.end()-1) == '^') {
        *(str2.end()-1) = '-';
    }
    else str2 += '-';

    display2->setText(str1);
    display1->setText(str2);
}

void calculator::click_multiply()
{
    if (!str1.isEmpty()) {
        str2 += str1;
        str2 += '*';
        str1.clear();
    }
    else if (str2.isEmpty() || *(str2.end()-1) == '(') {
        str2 += "0*";
    }
    else if (*(str2.end()-1) == '+' || *(str2.end()-1) == '-' || *(str2.end()-1) == '*' || *(str2.end()-1) == '/'|| *(str2.end()-1) == '^') {
        *(str2.end()-1) = '*';
    }
    else str2 += '*';

    display2->setText(str1);
    display1->setText(str2);
}

void calculator::click_divide()
{
    if (!str1.isEmpty()) {
        str2 += str1;
        str2 += '/';
        str1.clear();
    }
    else if (str2.isEmpty() || *(str2.end()-1) == '(') {
        str2 += "0/";
    }
    else if (*(str2.end()-1) == '+' || *(str2.end()-1) == '-' || *(str2.end()-1) == '*' || *(str2.end()-1) == '/'|| *(str2.end()-1) == '^') {
        *(str2.end()-1) = '/';
    }
    else str2 += '/';

    display2->setText(str1);
    display1->setText(str2);
}

void calculator::click_dot()
{
    if (str1.isEmpty()) str1 += "0.";
    else{
        bool x = 0;
        for (auto &i : str1)
            if (i == '.')x = 1;
        if (x == 0)str1 += '.';
    }

    display2->setText(str1);
    display1->setText(str2);
}

void calculator::click_sin()
{
    str2 += "sin(";
    left++;

    display2->setText(str1);
    display1->setText(str2);
}

void calculator::click_cos()
{
    str2 += "cos(";
    left++;

    display2->setText(str1);
    display1->setText(str2);
}

void calculator::click_log()
{

    str2 += "log(";
    left++;

    display2->setText(str1);
    display1->setText(str2);
}

void calculator::click_sqrt()
{
    str2 += "sqrt(";
    left++;


    display2->setText(str1);
    display1->setText(str2);
}

void calculator::click_sqr()
{
    if (!str1.isEmpty()) {
        str2 += "sqr(";
        str2 += str1;
        str2 += ')';
    }
    str1.clear();

    display2->setText(str1);
    display1->setText(str2);
}

void calculator::click_pow()
{
    if (!str1.isEmpty()) {
        str2 += str1;
        str2 += '^';
        str1.clear();
    }
    else if (str2.isEmpty() || *(str2.end()-1) == '(') {
        str2 += "0^";
    }
    else if (*(str2.end()-1) == '+' || *(str2.end()-1) == '-' || *(str2.end()-1) == '*' || *(str2.end()-1) == '/' || *(str2.end()-1) == '^') {
        *(str2.end()-1) = '^';
    }
    else str2 += '^';

    display2->setText(str1);
    display1->setText(str2);
}

void calculator::click_left()
{
    if(*(str2.end()-1)!=')'){
    str2 += '(';
    left++;
    }

    display2->setText(str1);
    display1->setText(str2);
}

void calculator::click_right()
{
    if (!str1.isEmpty()) {
        str2 += str1;
        str2 += ')';
        left--;
        str1.clear();
    }
    else if (str2.isEmpty() || *(str2.end()-1) == '(') {
        str2 += "0)";
        left--;
    }
    else if (*(str2.end()-1) == '+' || *(str2.end()-1) == '-' || *(str2.end()-1) == '*' || *(str2.end()-1) == '/' || *(str2.end()-1) == '^') {
        *(str2.end()-1) = ')';
        left--;
    }
    else {str2 += ')';
        left--;
    }

    display2->setText(str1);
    display1->setText(str2);
}

void calculator::click_clear()
{
    str1.clear();
    str2.clear();
    display2->setText(str1);
    display1->setText(str2);
}

void calculator::click_equal()
{
    str2+=str1;
    while(left>0){
        str2+=')';
        left--;
    }
    str2+='=';
    display1->setText(str2);
    string str;
    str = str2.toStdString();
    calculate('#'+str);
}


int getPrecedence(const string &exp, bool isCurrent) {
    if (exp == "=")
        return 1;
    else if (exp == "#")
        return 0;
    else if (exp == "+" || exp == "-")
        return(isCurrent) ? 3 : 4;
    else if (exp == "*" || exp == "/" || exp == "%")
        return (isCurrent) ? 5 : 6;
    else if (exp == "(")
        return 8;
    else if (exp == ")")
        return 2;
    else if (exp == "^")
        return 7;
    else if (exp == "sin" || exp == "cos"|| exp == "log"|| exp == "sqrt")
        return 7;
    else return -1;
}

void calculator::calculate(string &expression) {
    char *exp = &expression[0];
    bool isCurrent(false);//判断是否与栈顶运算符相同
    while (*exp != '\0') {//跳出条件
        if (*exp >= '0'&&*exp <= '9') {//判断为数字
            GetnumCIN(exp);
        }
        else {//判断为运算符
            string ch = GetcharCIN(exp);
            if (ch == "#" || ch == "(") {
                m_strStack.push(ch);
                continue;
            }
            else if (ch == ")"|| ch == "=")
                isCurrent = 1;

            while ((getPrecedence(ch, isCurrent) <= getPrecedence(m_strStack.GetTop(), isCurrent))) {
                //当前运算符优先级小于或等于栈顶运算符优先级
                if (m_strStack.GetTop() == "(") {
                    //完成（）的运算
                    compute();
                    isCurrent = 0;
                    break;
                }
                else compute();
            }
            if (ch != ")")m_strStack.push(ch);
        }
    }
    compute();//其余运算符全部执行完毕，执行=
    m_strStack.pop();//取出#
}

const double calculator::Getnum() {
    return m_numStack.pop();
}

const string calculator::Getchar() {
    return m_strStack.pop();
}

void calculator::click_num(int i)
{
    char a = i + 48;
    str1 += a;
    display2->setText(str1);
}

void calculator::compute() {
    string str = m_strStack.pop();
    double num1, num2;
    if (str != "#"&&str != "sin"&&str != "cos"&&str != "log"&&str != "sqrt"&&str != "="&&str != "(") {
        num1 = m_numStack.pop();
        if (str == "-"&&m_numStack.isEmpty()) {
            num2 = 0;
        }
        else num2 = m_numStack.pop();
        if (str == "+")
            m_numStack.push(num2 + num1);
        else if (str == "-") {
            m_numStack.push(num2 - num1);
        }
        else if (str == "*")
            m_numStack.push(num2 * num1);
        else if (str == "/")
            m_numStack.push(num2 / num1);
        else if (str == "%")
            m_numStack.push((int)num2 % (int)num1);
        else if (str == "^")
            m_numStack.push(pow(num2, num1));
    }
    else if (str == "=") {
        str2.clear();
        str1.clear();
        str1.setNum(m_numStack.pop());
        display2->setText(str1);
    }
    else if (str == "cos")
        m_numStack.push(cos(m_numStack.pop()));
    else if (str == "sin")
        m_numStack.push(sin(m_numStack.pop()));
    else if (str == "log")
        m_numStack.push(log(m_numStack.pop()));
    else if (str == "sqrt")
        m_numStack.push(sqrt(m_numStack.pop()));
}


void calculator::GetnumCIN(char *& exp)
{
    double tmp(0);
    while (*exp >= '0'&&*exp <= '9') {
        tmp *= 10;
        tmp += *(exp++)-48;
    }
    //记录整数位
    if (*exp == '.') {
        exp++;
        for (int i(1); *exp >= '0'&&*exp <= '9'; exp++, i++)
            tmp += (*exp - 48) *pow(10, -i);
    }
    //记录小数位
    m_numStack.push(tmp);
    //存入数据
}

string calculator::GetcharCIN(char *&exp)
{
    if (*exp == 's'&&*(exp+ 1) == 'i'&&*(exp+2) == 'n'){
        exp += 3;
        return "sin";
    } else if (*exp == 'c'&&*(exp+ 1) == 'o'&&*(exp+2) == 's'){
        exp += 3;
        return "cos";
    } else if (*exp == 'l'&&*(exp+ 1) == 'o'&&*(exp+2) == 'g'){
        exp += 3;
        return "log";
    } else if (*exp == 's'&&*(exp+ 1) == 'q'&&*(exp+2) == 'r'&&*(exp+3) == 't'){
        exp += 4;
        return "sqrt";
    }else{
        string a;
        a+=*(exp++);
        return a;
    }
}
