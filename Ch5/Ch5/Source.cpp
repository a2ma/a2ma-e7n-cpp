#include "../../std_lib_facilities.h"

int main()
{
	//move code back into try...catch. Also, why where there no main brackets with the try...catch? is that how it is in the stroustrup book?
	vector<double> v(10);
	vector<int> v2(10);

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << "\n";

	for (int i = 0; i < v2.size(); i++)
		cout << v2[i] << "\n";

	cout << v2[v2.size()] << "\n";


	keep_window_open();
	return 0;
}
//try {
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