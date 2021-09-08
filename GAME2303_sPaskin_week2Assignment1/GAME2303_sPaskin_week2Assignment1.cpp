// GAME2303_sPaskin_week2Assignment1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <istream>
#include <string>
using namespace std;

void twoNums(int x, int y) {

    for (int i = 1; i < 1000; i++) {
        if (i % x == 0) {
            if (i % y == 0) {
                cout << i <<"\n";
            }
        }
    }
}

void gnirts(string s) {

}

int main() // cout << "\n";
{

    int menuInput;
    int num1;
    int num2;
    string sin;
    
    cout << "Please make a selection using the number in ():\n\n";
    cout << "(1) Divisible by two numbers.\n";
    cout << "(2) Reverse string.\n";
    cout << "(3) Vowel remover.\n\n";
    cout << "(Any others) Exit.\n\n";
    cout << "Please make your selection now.\n";
    cin >> menuInput;

    switch (menuInput)
    {
    case 1:
        cout << "(1) Divisible by two numbers.\n\n";
        cout << "Please enter first number.\n";
        cin >> num1;
        cout << "\nThank you. Please enter second number.\n";
        cin >> num2;
        cout << "\nThank you.\n\n";
        twoNums(num1, num2);
        break;
    case 2:
        cout << "(2) Reverse string.\n\n";
        cout << "Please enter string to be reversed.\n";
        cin >> sin;
        cout << "Thank you.\n";
        gnirts(sin);
        break;
    case 3:
        break;
        cout << "(3) Vowel remover.\n\n";
    default:
        cout << "(Any others) Exit.";
        break;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
