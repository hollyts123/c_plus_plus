#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	 
	cout << "Enter the first side of the triangle: ";
	cin >> a;
	
	cout << "Enter the second side of the triangle: ";
	cin >> b;
	
	cout << "Enter the third side of the triangle: ";
	cin >> c;
	
	cout << (((b + c) > a) && ((a + c) > b) && ((a + b ) > c));
}
