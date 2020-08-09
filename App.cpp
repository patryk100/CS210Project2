#include <iostream>
#include "App.h"

App::App()
{
	investmentAmt = 0;
	monthlyDeposit = 0;
	annualInterest = 0.03;
	numOfYears = 0;
	chart = new Chart();



}

App::App(double invest, double monthly, double annual, int years)
{
	investmentAmt = invest;
	monthlyDeposit = monthly;
	annualInterest = annual;
	numOfYears = years;
	chart = new Chart();


}

App::~App()
{
	//delete[];
}
void App::report() {


}
void App::menu() {

}
void App::display() {

	char cont;
	std::cout << "* * * * * * * Data input * * * * * * * " << std::endl;
	std::cout << " * * * * * * * * * * * * * * * * * * * " << std::endl;

	std::cout << "Initial Investment Amount: ";
	std::cin >> investmentAmt;
	std::cout << "Monthly Deposit: ";
	std::cin >> monthlyDeposit;
	std::cout << "Annual Interest: ";
	std::cin >> annualInterest;
	std::cout << "Number of Years: ";
	std::cin >> numOfYears;
	std::cout << "Press any key to continue . . . ." << std::endl;
	cont = _getch();

	if (isascii(cont)) {
		std::cout << "Do stuff" << std::endl;

		// Continue to other things
	}
}

void App::mainloop() {
	int x;
	bool on = true;
	while (on)
	{


		display();

		

		chart->Display();
		std::cout << " \n TEST TEST TEST \n\n\n Enter 1 to quit mainloop: ";
		std::cin >> x;

		if (x == 1)
		{
			on = false;
		}
	}
	
}
