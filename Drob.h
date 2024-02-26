#pragma once

#include <iostream>

using namespace std;

class Drob
{
private:
	int num;
	int vnum;
public:
	void input();

	void minus(Drob a);
	void plus(Drob a);
	void multiply(Drob a);
	void divide(Drob a);
};