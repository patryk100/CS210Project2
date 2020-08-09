#ifndef APP_H_
#define APP_H_
#pragma once
#include <iomanip>
#include "Chart.h"
#include <conio.h>

class Chart;
class App
{
public:
	App();
	App(double, double, double, int);
	~App();
	void mainloop();
	int getNumOfYears() {
		return numOfYears;
	};
	

private:
	double investmentAmt;
	double monthlyDeposit;
	double annualInterest;
	int numOfYears;

	Chart* chart;

	void display();
	void menu();
	void report();


				};
#endif

