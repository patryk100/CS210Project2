#ifndef CHART_H_
#define CHART_H_
#pragma once
#include "App.h"

class App;

class Chart {
public:
	Chart();
	~Chart();
	void Display();
	void Display(bool);
	App* myApp;

private:
	int numOfMonths;
	double openingAmt;
	double depositedAmt;
	double total;
	double interest;
	double closingBalance;

};
#endif