#include "Money.h"

int main()
{
    double num;
    std::cout << "Введите число: ";
    std::cin >> num;
    Money rubles = Money(num);
    std::cout << "Введите число: ";
    std::cin >> num;
    Money rubles2 = Money(num);

    Money rubles3 = rubles - rubles2;

    std::cout << "Разность чисел: " << rubles3 << std::endl;
}