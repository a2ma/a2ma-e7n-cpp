#include "../../std_lib_facilities.h"

// ask user for a yes-or-no answer;
// return 'b' to indicate a bad answer (i.e., not yes or no)
char ask_user(string question)
{
	cout << question << "? (yes or no)\n";
	string answer = " ";
	cin >> answer;
	if (answer == "y" || answer == "yes") return 'y';
	if (answer == "n" || answer == "no") return 'n';
	return 'b';    // 'b' for "bad answer"
}

//int area(int length, int width)
//{
//	return length * width;
//}

int area(int length, int width);    // calculate area of a rectangle

int framed_area(int x, int y)       // calculate area within frame
{
	const int frame_width = 2;
	cout << x - frame_width << "\n";
	cout << y - frame_width << "\n";
	if (x - frame_width <= 0 || y - frame_width <= 0)
		error("non-positive argument for area() called by framed_area()");
	return area(x - frame_width, y - frame_width);
}

int area(int length, int width)
{
	if (length <= 0 || width <= 0) return -1;
	return length * width;
}

void f(int x, int y, int z)
{
	cout << "x=" << x << "; y=" << y << "; z=" << z << endl;

	int area1 = area(x, y);
	if (area1 <= 0) error("non-positive area");
	int area2 = framed_area(1, z);
	int area3 = framed_area(y, z);
	double ratio = double(area1) / area3;
	// ...

	cout << "area1=" << area1 << endl
		<< "area2=" << area2 << endl
		<< "area3=" << area3 << endl;
}

//constexpr int frame_width = 2;
//int framed_area(int x, int y)
//{
//	return area(x - frame_width, y - frame_width);
//}

int main()
{


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

	try
	{
		f(3, 3, 3);
		f(-1, 2, 3);
		f(1, -2, 3);
		f(-1, -2, 3);
		f(1, 2, -3);
		f(-1, 2, -3);
		f(1, -2, -3);
		f(-1, -2, -3);
		char answer = ask_user("Have you read results?");
	}
	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		return 1;
	}
	catch (...) {
		cerr << "Oops: unknown exception!\n";
		return 2;

	}
}