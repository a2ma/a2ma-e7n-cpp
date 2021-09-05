#include "../../std_lib_facilities.h"


int main()
{
	string first_name;
	string friend_name;
	char friend_sex;
	int age;

	cout << "Please enter the name of your addressee: ";
	cin >> first_name;
	cout << "Please enter the name of a friend mutual to you and the addressee: ";
	cin >> friend_name;
	cout << "Please enter the sex of the mutual friend (m/f): ";
	cin >> friend_sex;
	

	cout << "Enter the age of the recipient: ";
	cin >> age;
	if (age <= 0 || age > 110)
	{
		simple_error("You're kidding!");
	}


	cout << "Dear " << first_name << ",\n\n\tI miss you. How have you been? I am doing well. We are anxious to hear news about you. We have been asking everyone who is coming here and so far no one has brought word. ";
	cout << "Have you heard from " << friend_name << "? ";

	if (friend_sex == 'm')
	{
		cout << "I am worried about him. If you see him, please ask him to call me. ";
	}
	if (friend_sex == 'f')
	{
		cout << "I am worried about her. If you see her, please ask her to call me. ";
	}

	cout << "I hear you just had a birthday and you are " << age << " years old. ";

	if (age < 12)
	{
		cout << "Next year you will be " << age + 1 << ". ";
	}
	else if (age == 17)
	{
		cout << "Next year you will be able to vote. ";
	}
	else if (age > 70)
	{
		cout << "I hope you are enjoying retirement. ";
	}

	cout << "\n\nYours sincerely, \n\nAbdulrahman Alruwishan";

	
}