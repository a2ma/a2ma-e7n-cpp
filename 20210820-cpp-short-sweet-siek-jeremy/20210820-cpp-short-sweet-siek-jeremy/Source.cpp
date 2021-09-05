// 20210820-cpp-short-sweet-siek-jeremy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string original = "";
    string reverse = "";
    cout << "Hello. Please enter a word to be reversed:\n";
    /*while (cin >> original) {
        original += original;
    }*/
    // does not seem to capture a whole string; leave be until figure out why.
    // for now, capture one word
    cin >> original;
    //cout << original[original.size()/ 2];

    //my solution
    /*for (int i = original.length()-1; i >= 0; --i) {
        reverse += original[i];
    }*/

    //siek's idea:
    reverse = original;
    for (int i = 0; i <= original.size() / 2; ++i) {
        swap(reverse[i], reverse[original.size() - i - 1]);
    }

    //my exercise attempt continued
    cout << "Original: " << original << "\n";
    cout << "Reverse: " << reverse << "\n";

    if (original == reverse) {
        cout << "This word is a palindrome.";
    }
    else {
        cout << "This word is not a palindrome.";
    }

}

// Siek wrote a function that used the swap function, and swapped the first half of the submitted string with the second
// after finding the middle point

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
