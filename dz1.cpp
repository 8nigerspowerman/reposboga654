#include <iostream>
#include "Drob.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    Drob num1, num2;
    cout << "Введите первую дробь" << endl;
    num1.input();
    cout << "Введите вторую дробь" << endl;
    num2.input();

    num1.plus(num2);
    num1.divide(num2);
    num1.minus(num2);
    num1.multiply(num2);
}