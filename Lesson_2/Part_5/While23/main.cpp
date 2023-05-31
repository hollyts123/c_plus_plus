#include <iostream>
using namespace std;

int main() {
    int a, b;  
	cout << "Enter the numbers a and b: " << endl;
	cin >> a >> b;
	int nod = a;
	
	do {
	   int temp = b;
       b = a % b;
       a = temp;
       if (b != 0) {
            nod = b;
        }
	} while (b != 0);
	
	cout << "NOD is " << nod;
}
