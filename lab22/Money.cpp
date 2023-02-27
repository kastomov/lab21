

#include "Money.h"
#include <cmath>



Money::Money(double amount) {
    this->rub = (int)amount;
    this->pennies = (int)(amount*100 - (int)amount*100);
}

Money::Money() {
    this->rub = 0;
    this->pennies = 0;
}

Money operator+(Money& a, Money& b) {
    Money money;
    money.pennies = (a.pennies + b.pennies) % 100;
    money.rub = (
            a.rub
            + b.rub
            + (a.pennies + b.pennies)/100 // рубли после сложения копеек
            );
    return money;
}

Money operator-(Money& a, Money& b) {

    int m1 = a.rub*100 + a.pennies;
    int m2 = b.rub*100 + b.pennies;

    double m3 = m1 - m2;

    m3 = m3 / 100;
    Money money = Money(m3);
    return money;
}


std::ostream& operator<<(std::ostream &os, Money money) {
    return os << money.rub << "," << money.pennies;
}

