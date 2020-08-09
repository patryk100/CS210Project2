#include <iostream>
#include <iomanip>
#include "Chart.h"

Chart::Chart()
{
	numOfMonths = 0;
	openingAmt = 0;
	depositedAmt = 0;
	total = 0;
	interest = 0;
	closingBalance = 0;
	myApp = new App();
}

Chart::~Chart()
{
}


void Chart::Display()
{
	std::cout << "\tBalance and Interest without Additinal Monthly Deposits\t" << std::endl;
	std::cout << "*********************************************************************" << std::endl;
	std::cout << "Year" << std::setw(18);
	for (auto i = 0; i < myApp->getNumOfYears(); i++)
	{
		std::cout << i << std::setw(6);
	}
	std::cout << std::endl << "Year End Balance" << std::setw(6) <<
	std::endl << "Year End Interest" << std::setw(6) <<
	std::endl;
}

void Chart::Display(bool on)
{
	
}

