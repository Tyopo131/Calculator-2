#include <iostream>
#include "linker.h"
double returnRound;

using namespace std;



int main() {
	int remainIntTransfer = returnRound;
	choose:
	int mode;
	cout << "Don't enter a number too big. (higher than 2,147,483,647) Or the program\nwill get stuck in an infinite loop.\n\n\n\nType 1 to use addition mode, 2 to use subtraction mode\nor 3 to use multiplication mode,\n4 for division, 5 to use percentage or 100 to cancel. As of right now, percentage only works with whole numbers.\n";
	cin >> mode;
	if (mode == 1) add(returnRound);
	else if (mode == 2) sub(returnRound);
	else if (mode == 3) multiply(returnRound);
	else if (mode == 4) divide(returnRound);
	else if (mode == 5) remain(remainIntTransfer);
	else if (mode == 100) return 0;
	else {
		cout << "Invalid mode. Please choose again.\n"; goto choose;
	}
}

void returnReturnRound(double round){
	returnRound = round;
	main();
}