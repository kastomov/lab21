#include <iostream>


#ifndef LAB21_MONEY_H
#define LAB21_MONEY_H


class Money {
public:
    long rub; // число для рублей
    int pennies; // число для копеек

    Money();
    Money(double amount);


};

Money operator+(Money& a, Money& b);
Money operator-(Money& a, Money& b);

std::ostream& operator<<(std::ostream&, Money money);

#endif //LAB21_MONEY_H
