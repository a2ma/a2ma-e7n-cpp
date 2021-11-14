#include "../../std_lib_facilities.h"

//constexpr int frame_width = 2;
//int framed_area(int x, int y)
//{
//	return area(x - frame_width, y - frame_width);
//}

double ctok(double c)
{
	if (c < -273.15) error("Invalid temperature: lower than absolute zero kelvin.");
	double k = c + 273.15;
	return k;
}

int main()
{
	try {

		double c = 0;
		cin >> c;
		/*if (c < -273.15) error("Invalid temperature: lower than absolute zero kelvin.");*/
		double k = ctok(c);
		cout << k << '/n';
	}
	catch (runtime_error& e)
	{
		cout << e.what();
	}
	// start pasted from chapter.5.7-problematic.cpp
	//vector<double> temps; // temperatures 

	//double temp = 0;
	//double sum = 0;
	//double high_temp = 0;
	//double low_temp = 0;

	//while (cin >> temp)         // read and put into temps
	//	temps.push_back(temp);

	//for (int i = 0; i < temps.size(); ++i)
	//{
	//	if (temps[i] > high_temp) high_temp = temps[i];  // find high
	//	if (temps[i] < low_temp)  low_temp = temps[i];  // find low
	//	sum += temps[i];      // compute sum
	//}

	//cout << "High temperature: " << high_temp << endl;
	//cout << "Low temperature: " << low_temp << endl;
	//cout << "Average temperature: " << sum / temps.size() << endl;

	// end pasted from chapter.5.7-problematic.cpp
	//vector<double> v(10);
	//vector<int> v2(10);

	//try {
	//	for (int i = 0; i < v.size(); i++)
	//		cout << v[i] << "\n";

	//	for (int i = 0; i < v2.size(); i++)
	//		cout << v2[i] << "\n";

	//	cout << v2[v2.size()] << "\n";


	//	keep_window_open();
	//	return 0;
		//	//cout << "Success!\n";
		//	//cout << "Success!\n"; // dropped closing quotes
		//	//cout << "Success!\n"; //"
		//	//cout << "success!\n";
		//	/*string res = 7;
		//	vector<int>v(10);
		//	v[5] = res;*/
		//	//	cout << "Success!\n";
		//		//vector<int> v(10);
		//		//v[5] = 7;
		//		//if (v[5] != 7) cout << "Success!\n";
		//		//bool cond = true;
		//		//if (cond) cout << "Success!\n"; 
		//		//bool c = false; if (c) cout << "Success!\n"; else cout << "Fail\n";
		//		//string s = "ape"; bool c = "fool" < s; if (c) cout << "Success!\n";
		//		//string s = "ape"; if (s == "fool") cout << "Success!\n";
		//		//string s = "ape"; if (s == "fool") cout << "Success\n";
		//		//string s = "ape"; if (s + "fool") cout < "Success!\n";
		//
		//		//13
		//		//vector<char> v(5); 
		//		//for (int i = 0; i<v.size(); ++i) cout << "Success!\n";
		//
		//		//14
		//		//vector<char> v(5);
		//		//for (int i = 0; i < v.size(); ++i) cout << "Success!\n";
		//
		//		//15
		//		//string s = "Success!\n"; for (int i = 0; i < s.size(); ++i) cout << s[i];
		//
		//		//16
		//		//if (true) cout << "Success!\n"; else cout << "Fail!\n";
		//		// removed "then" after if header
		//
		//		//17
		//		//int x = 2000; char c = x; if (c == 2000) cout << "Success!\n";
		//		//cout << c << "\n";
		//
		//		//18
		//	//string s = "Success!\n"; for (int i = 0; i < 10; ++i) cout << s[i];
		//	//cout << s.size() << "\n";
		//	//cout << s[9] << "\n";
		//	// isn't string only 9 characters? why no error on i < 10?
		//
		//	//19
		//	//vector<char> v(5); for (int i = 0; i < v.size(); ++i) { cout << "Success!\n"; }
		//
		//	//20
		//	//int i = 0; int j = 9; int x = 100;
		//	//while (i < 10) 
		//	//{ 
		//	//	/*j += 100; 
		//	//	x++; 
		//	//	cout << j << "\n"; */
		//	//	++i;
		//	//}
		//	//if (j < i) cout << "Success!\n";
		//
		//	//21
		//	//int x = 2; double d = 5 / (x + 2); if (d == 2 * x + 0.5) cout << "Success!\n";
		//
		//	//22
		//	//string s = "Success!\n"; for(int i=0; i<=s.size(); ++i) cout << s[i];
		//
		//	//23
		//	//int i = 0; while (i < 10) ++i; if (10 <= i) cout << "Success!\n";
		//
		//	//24
		//	//int x = 4; double d = 5 / (x - 2); if (d == 2 * x + 0.5) cout << "Success!\n";
		//
		//	//25
		//	//cout << "Success!\n";
		//	/*vector<double> v(10);
		//	vector<int> v2(10);
		//
		//	for (int i = 0; i < v.size(); i++)
		//		cout << v[i] << "\n";
		//	
		//	for (int i = 0; i < v2.size(); i++)
		//		cout << v2[i] << "\n";
		//
		//	cout << v2[v2.size()] << "\n";
		//
		//
		//	keep_window_open();
		//	return 0;*/
	//}
	//catch (exception& e) {
	//	cerr << "error: " << e.what() << '\n';
	//	keep_window_open();
	//	return 1;
	//}
	//catch (...) {
	//	cerr << "Oops: unknown exception!\n";
	//	keep_window_open();
	//	return 2;
	//}

// TRY THIS
// pg. 138: skipped
// pg. 139: skipped
// pg. 146:

	/*try
	{
		int x = -1;
		int y = 2;
		int z = 4;

		if (x <= 0) error("non-positive x");
		if (y <= 0) error("non-positive y");

		int area1 = area(x, y);
		int area2 = framed_area(1, z);
		int area3 = framed_area(y, z);
		double ratio = double(area1) / area3;
	}
	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		return 1;
	}
	catch (...) {
		cerr << "Oops: unknown exception! \n";
		return 2;
	}*/

	//try
	//{
	//	f(3, 3, 3);
	//	f(-1, 2, 3);
	//	f(1, -2, 3);
	//	f(-1, -2, 3);
	//	f(1, 2, -3);
	//	f(-1, 2, -3);
	//	f(1, -2, -3);
	//	f(-1, -2, -3);
	//	char answer = ask_user("Have you read results?");
	//}
	//catch (exception& e) {
	//	cerr << "error: " << e.what() << '\n';
	//	return 1;
	//}
	//catch (...) {
	//	cerr << "Oops: unknown exception!\n";
	//	return 2;

	//}
}