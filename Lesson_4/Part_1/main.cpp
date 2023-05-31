#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void showMessage() {
		cout << "Yes";
	}

int main() {
	srand(time(nullptr));
	int number = rand() % 100 + 1;
	cout << number << endl;
	if (number > 50) {
		showMessage();
	} else {
		do {
		number = rand() % 100 + 1;
		cout << number << endl;
		if (number > 50) {
		showMessage();
	   }
	   } while (number <= 50);
	}	
}
