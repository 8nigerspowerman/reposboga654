#include "Drob.h"
#include <iostream>

using namespace std;

void Drob::input() {
	cout << "������� ���������" << endl;
	cin >> num;
	cout << "������� �����������" << endl;
	cin >> vnum;
}

void Drob::plus(Drob a) {
	int resultnum = num * a.vnum + a.num * vnum;
	int resultvnum = vnum * a.vnum;
	cout << "����� ��� �������� ����� " << resultnum << " / " << resultvnum << endl;
}

void Drob::minus(Drob a) {
	int resultnum = num * a.vnum - a.num * vnum;
	int resultvnum = vnum * a.vnum;
	cout << "����� ��� ��������� ����� " << resultnum << " / " << resultvnum << endl;
}

void Drob::multiply(Drob a) {
	int resultnum = num * a.num;
	int resultvnum = vnum * a.vnum;
	cout << "����� ��� ��������� ����� " << resultnum << " / " << resultvnum << endl;
}

void Drob::divide(Drob a) {
	int resultnum = num * a.vnum;
	int resultvnum = vnum * a.num;
	cout << "����� ��� ������� ����� " << resultnum << " / " << resultvnum << endl;
}
