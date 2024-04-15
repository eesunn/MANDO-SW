//클래스로 계산기 만들기
#pragma once
#include<iostream>
using namespace std;

class Calculator {
private:
	double x, y, sum;
	char oper;

	//oper은 사칙연산자(+-*/)
public:
	Calculator(double x, double y, double sum);

	void enter();
		

};
