#include <iostream>
using namespace std;

int main() {
   int month;
   cout << "Enter the number of the month: ";
   cin >> month;
   
   switch(month) {
   	case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
    	    cout << "The month has 31 days";
    	    break;
        case 2:
	    cout << "The month has 28 days";
	    break;
	case 4:
	case 6:
	case 9:
	case 11:
	    cout << "The month has 30 days";
		break;	
	default:
	    cout << "You entered an invalid month";
		break;	
   }
}
