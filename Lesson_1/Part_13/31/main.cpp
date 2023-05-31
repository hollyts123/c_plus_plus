#include <iostream>
#include <math.h>
using namespace std;

int main() {
	
	int fahrenheitTemp;
	cout << "Enter the temperature in Fahrenheit: ";
	cin >> fahrenheitTemp;
	
	int celsiusTemp = (fahrenheitTemp - 32) * 5/9;
	cout << "The temperarature " << fahrenheitTemp << " in Celsius is " << celsiusTemp;
}
