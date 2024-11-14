#include <iostream>

using namespace std;

int main () 
{
	int age;
	cout << "What is your age?: ";
	cin >> age;
	
	if (age <= 15) {
		cout << "too young too drive";
	}
	else if (age == 18) {
		cout << "Better clear the road";
	}
	else if (age >= 20) {
		cout << "You are getting pretty old";
	}
	return 0;
}