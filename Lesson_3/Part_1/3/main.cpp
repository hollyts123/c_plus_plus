#include <iostream>
using namespace std;

int main() {
    char letters[] = {'c', 'g', 't', 'a', 'm', 'q', 's', 'v', 'o', 'f'};
    
	
	cout << "Elements with even indexes: " << endl;
    for (int i = 0; i < 10; i += 2) {
    	cout << i << " - " << letters[i] << endl;
	}
	
	cout << "Elements with odd indexes: " << endl;
	for (int i = 1; i <= 10; i += 2) {
		cout << i << " - " << letters[i] << endl;
	}
}
