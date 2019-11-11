#include <iostream>
#include <string>
#include "HeartRate.h"

using namespace std;

int main() {

	string firstname, secondname;
	int day, month, year;

	cout << "Enter your first name: \n";
	cin >> firstname;

	cout << "Enter your last name: \n";
	cin >> secondname;

	cout << "Enter your DOB, in day-month-year: \n";
	cin >> day >> month >> year;

	HeartRates hr (firstname,secondname,day,month,year);
	cout << "Your age is: " << hr.calculateAge(year) << endl;
	cout << "Your maximum heart rate: " << hr.calculatemaxrate() << endl;
	cout << "Your target heart rate is min: " << hr.calculatelowerrate() << " - " << hr.calculatemaxrate() << endl;

}