#include "../../std_lib_facilities.h"

int main()
{
	double miles = 0;
	cout << "Miles to kilometers conversion.\nPlease enter the number of miles: ";
	cin >> miles;
	double km = miles * 1.609;
	cout << miles << " miles equals " << km << " kilometers.";
}