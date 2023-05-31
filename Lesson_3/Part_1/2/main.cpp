#include <iostream>
using namespace std;

int main() {
    string animals[10] = {"turtle", "tiger", "hippo", "lion", "mouse", "cat", "crocodile", "dog", "rabbit", "wolf"};
    
	
	cout << "Elements with even indexes: " << endl;
    for (int i = 0; i < 10; i += 2) {
    	cout << i << " - " << animals[i] << endl;
	}
	
	cout << "Elements with odd indexes: " << endl;
	for (int i = 1; i <= 10; i += 2) {
		cout << i << " - " << animals[i] << endl;
	}
}
