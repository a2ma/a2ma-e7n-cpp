// read and write a first name
#include "../../std_lib_facilities.h"

int main()
{
	cout << "Please enter your first name (then press enter): \n";
	string first_name; // create variable of type string
	cin >> first_name; // read characters into first_name
	cout << "Hello, " << first_name << "!\n";

}