//Ŭ������ ���� �����
#pragma once
#include<iostream>
using namespace std;

class Calculator {
private:
	double x, y, sum;
	char oper;

	//oper�� ��Ģ������(+-*/)
public:
	Calculator(double x, double y, double sum);

	void enter();
		

};
