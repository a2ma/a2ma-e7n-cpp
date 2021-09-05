#include "../../std_lib_facilities.h"

int main()
{
	int first;
	int second;
	int difference;
	double ratio;
	cout << "Please enter number 1 and press enter: ";
	cin >> first;
	cout << "Please enter number 2 and press enter: ";
	cin >> second;

	if (first > second)
	{
		cout << first << " is larger. \n" << second << " is smaller.\n";
		difference = first - second;
		ratio = double(first) / double(second);
	}
	else
	{
		cout << second << " is larger. \n" << first << " is smaller.\n";
		difference = second - first;
		ratio = double(second) / double(first);
	}

	cout << "The sum of the two integers is "
		<< first + second << ", their difference is "
		<< difference << ", their product is "
		<< first * second << ", and their ratio is "
		<< ratio << ".";
}