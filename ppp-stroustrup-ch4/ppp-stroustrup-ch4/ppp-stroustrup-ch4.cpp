#include "../../std_lib_facilities.h"

int square(int n)
{
	int squared = 0;

	for (int i = 0; i < n; i++)
	{
		squared += n;
	}
	return squared;
}

int main()
{

	// Exercises
	// // Try This
	// // // 1st
	//Sample code: 
	/*constexpr double cm_per_inch = 2.54;

	double length = 1;

	char unit = '';
	cout << "Please enter a length followed by a unit (c or i):\n";
	cin >> length >> unit;

	if (unit == 'i')
		cout << length << "in == " << cm_per_inch * length << "cm\n";
	else if (unit == 'c')
		cout << length << " cm == " << length / cm_per_inch << "in\n";
	else
		cout << "Sorry, I don't know a unit called '" << unit << "'\n";*/

		//convert above program to one that converts yen ('y'), kroner ('k'), and pounds ('p') into dollars.
	//constexpr double dollar_per_kroner = 0.16;
	//constexpr double dollar_per_yen = 0.0092;
	//constexpr double dollar_per_pounds = 1.4;

	//double amount = 1;

	//char unit = ' ';
	//cout << "Please enter a currency followed by a unit (yen ('y'), kroner ('k'), or pounds ('p')):\n";
	//cin >> amount >> unit;

	//if (unit == 'y')
	//	cout << amount << " yen == " << dollar_per_yen * amount << " dollars\n";
	//else if (unit == 'k')
	//	cout << amount << " kroner == " << dollar_per_kroner * amount << " dollars\n";
	//else if (unit == 'p')
	//	cout << amount << " pound(s) == " << dollar_per_kroner * amount << " dollars\n";
	//else
	//	cout << "Sorry, I don't know a unit called '" << unit << "'\n";

	//constexpr double dollar_per_kroner = 0.16;
	//constexpr double dollar_per_yen = 0.0092;
	//constexpr double dollar_per_pounds = 1.4;
	//constexpr double dollar_per_yuan = 0.16;

	//double amount = 1;

	//char unit = ' ';
	//cout << "Please enter a currency followed by a unit (yen ('y'), kroner ('k'), pounds ('p'), or yuan ('r')):\n";
	//cin >> amount >> unit;

	//switch (unit) {
	//case 'y':
	//		cout << amount << " yen == " << dollar_per_yen * amount << " dollars\n";
	//		break;
	//case 'k':
	//	cout << amount << " kroner == " << dollar_per_kroner * amount << " dollars\n";
	//	break;
	//case 'p':
	//	cout << amount << " pound(s) == " << dollar_per_kroner * amount << " dollars\n";
	//	break;
	//case 'r':
	//	cout << amount << " yuan == " << dollar_per_kroner * amount << " dollars\n";
	//	break;
	//default:
	//	cout << "Sorry, I don't know a unit called '" << unit << "'\n";
	//	break;
	//}


	//page 111
	//int i = 97;
	//while (i < 123)
	//{
	//	cout << char(i) << " \t" << i << " \n";
	//	i++;
	//}

	// p. 113
	//for (int i = 48; i <= 57; i++)
	//{
	//	cout << char(i) << " \t" << i << " \n";
	//}
	//for (int i = 65; i <= 90; i++)
	//{
	//	cout << char(i) << " \t" << i << " \n";
	//}
	//for (int i = 97; i <= 122; i++)
	//{
	//	cout << char(i) << " \t" << i << " \n";
	//}


	// p 116
	//cout << square(3) << " \n";
	//cout << square(4) << " \n";
	//cout << square(5) << " \n";
	//cout << square(6) << " \n";
	//cout << square(12) << " \n";
	//cout << square(24) << " \n";

	//int i = 0;
	//while (i < 100)
	//{
	//	cout << i << "\t" << square(i) << "\n";
	//	i++;
	//}

	// p. 125
	//vector<string> message;
	//cout << "Please input your message here, then press enter, then type in Ctrl+Z and press enter again.\n";
	//for(string word; cin>>word;)
	//{
	//	message.push_back(word);
	//}

	//for (int i = 0; i < message.size(); i++)
	//{
	//	if (message[i] != "bald" && message[i] != "fat")
	//	{
	//		cout << message[i] << " ";
	//	}
	//	else {
	//		for (int j = 0; j < message[i].size(); j++)
	//		{
	//			cout << "*";
	//			if (j == message[i].size()-1)
	//			{
	//				cout << " ";
	//			}
	//		}
	//	}
	//}

	// exercises, 2
	// "compute mean and median temperatures"
	//vector <double> temps;
	//double mediantemp;
	//for (double temp; cin >> temp;)
	//	temps.push_back(temp);

	////"compute mean temperature"
	//double sum = 0;
	//for (double x : temps) sum += x;
	//cout << "Average temperature: " << sum / temps.size() << '\n';

	////"median temperature"
	//sort(temps);
	//if (temps.size() % 2 == 0) {
	//	mediantemp = (temps[temps.size() / 2] + temps[temps.size() / 2 - 1]) / 2;
	//	cout << "Odd number of temperatures." << '\n';
	//}
	//else
	//{
	//	mediantemp = temps[temps.size() / 2];
	//	cout << "Even number of temperatures." << '\n';
	//}
	//cout << "Median temperature: " << mediantemp << "." << '\n';

	vector <double> distances;
	double totaldistance = 0;
	double shortestdistance;
	double longestdistance;
	double meandistance;

	for (double distance; cin >> distance;)
	{
		distances.push_back(distance);
	}

	sort(distances);
	shortestdistance = distances[0];
	longestdistance = distances[distances.size() - 1];

	for (int i = 0; i < distances.size(); i++)
	{
		totaldistance += distances[i];
	}

	meandistance = totaldistance / distances.size();

	cout << "Total distance: " << totaldistance << '\n' << "Shortest Distance: " << shortestdistance << '\n'
		<< "Longest Distance: " << longestdistance << '\n' << "Mean distance: " << meandistance << '\n' << "End.";
}

// actual drill:
	//double num1;
	//double smallest = 0;
	//double largest = 0;
	//int count = 0;
	//string unit;
	//double sum = 0;
	//vector<double> numbers;

	//cout << "Please enter numbers, each followed by their unit. (Accepted units: cm, m, in, ft.)\n";
	//while (cin >> num1 >> unit)
	//{
	//	if (unit == "cm" || unit == "m" || unit == "in" || unit == "ft")
	//	{
	//		if (unit == "cm")
	//		{
	//			num1 /= 100;
	//		}
	//		if (unit == "in")
	//		{
	//			num1 *= 0.0254;
	//		}
	//		if (unit == "ft")
	//		{
	//			num1 *= 0.3048;
	//		}
	//		if (count == 0)
	//		{
	//			smallest = num1;
	//		}
	//		if (num1 < smallest)
	//		{
	//			smallest = num1;
	//			cout << num1 << " is the smallest so far.\n";
	//		}
	//		if (num1 > largest)
	//		{
	//			largest = num1;
	//			cout << num1 << " is the largest so far.\n";
	//		}
	//		sum += num1;
	//		count++;
	//		numbers.push_back(num1);
	//		sort(numbers);
	//	}
	//	else
	//	{
	//		cout << "That is an invalid unit.\n";
	//	}
	//}

	//cout << "Smallest: " << smallest << "\nLargest: " << largest << "\nNumber of values: " << count << "\nSum: " << sum << "\n";
	//for (int i = 0; i < numbers.size(); i++)
	//{
	//	cout << numbers[i] << "\n";
	//}
	////double num2;

	///*while (cin >> num1 >> num2)
	//{
	//	if (num1 > num2)
	//	{
	//		cout << "The smaller value is " << num2 << "\nThe larger value is " << num1 << "\n";
	//		if (num1 - num2 <= 1.0 / 100)
	//		{
	//			cout << "The numbers are almost equal.\n";
	//		}
	//	}
	//	else if (num2 > num1)
	//	{
	//		cout << "The smaller value is " << num1 << "\nThe larger value is " << num2 << "\n";
	//		if (num2 - num1 <= 1.0 / 100)
	//		{
	//			cout << "The numbers are almost equal.\n";
	//		}
	//	}
	//	else
	//	{
	//		cout << "The numbers are equal.";
	//	}
	//}

	//*/