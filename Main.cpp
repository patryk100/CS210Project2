#include <iostream>
#include "App.h"

int main() {

	App* myApp = nullptr;

	myApp = new App;

	myApp->mainloop();

	system("PAUSE");
	return 0;

}




