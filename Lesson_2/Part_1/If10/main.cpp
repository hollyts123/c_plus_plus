#include <iostream>
using namespace std;

int main() {
   int A, B;
   cout << "Enter the numbers A and B: " << endl;
   cin >> A >> B;
   
   if (A != B) {
   	A = A + B;
   	B = A + B;
   } else {
   	A = 0;
   	B = 0;
   }
   
   cout << "Number A is now " << A << ", number B is now " << B;
}
