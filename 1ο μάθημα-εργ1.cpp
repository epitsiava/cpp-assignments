#include <iostream>

using namespace std;


int main() {
	int number;

    cout << "Enter a three-digit number: ";
	cin >> number;

	cout << (number)%10;
	cout << (number/10)%10;
	cout << (number/100)%10;
 
	
	return 0;
}



