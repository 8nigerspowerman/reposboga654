#include "Drob.h"
#include <iostream>

using namespace std;

void Drob::input() {
	cout << "Введите числитель" << endl;
	cin >> num;
	cout << "Введите знаменатель" << endl;
	cin >> vnum;
}

void Drob::plus(Drob a) {
	int resultnum = num * a.vnum + a.num * vnum;
	int resultvnum = vnum * a.vnum;
	cout << "Сумма при сложении равна " << resultnum << " / " << resultvnum << endl;
}

void Drob::minus(Drob a) {
	int resultnum = num * a.vnum - a.num * vnum;
	int resultvnum = vnum * a.vnum;
	cout << "Сумма при вычетании равна " << resultnum << " / " << resultvnum << endl;
}

void Drob::multiply(Drob a) {
	int resultnum = num * a.num;
	int resultvnum = vnum * a.vnum;
	cout << "Сумма при умножении равна " << resultnum << " / " << resultvnum << endl;
}

void Drob::divide(Drob a) {
	int resultnum = num * a.vnum;
	int resultvnum = vnum * a.num;
	cout << "Сумма при делении равна " << resultnum << " / " << resultvnum << endl;
}
