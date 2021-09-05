#include "..//..//std_lib_facilities.h"

int main()
{
	cout << "Please enter your first name and age\n";
	string first_name = "???" ; // string variable, setting initial value
	double age = 0; // int variable, setting initial value
	cin >> first_name; // read string
	cin >> age; // read int
	double ageInMonths = age * 12;
	cout << "Hello, " << first_name << " (age: " << ageInMonths << " months)\n.";
	return 0;
}