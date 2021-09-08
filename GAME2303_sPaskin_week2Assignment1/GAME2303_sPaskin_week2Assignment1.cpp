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

    string s2;

    for (int i = 0; i < s.size(); i++) {
        
        s2 = s[i] + s2;
    }
    cout << s.size() << "\n";
    cout << s.length() << "\n";
    cout << s << "\n";
    cout << s2;
}

void strng(string s) {

    string s2;

    for (int i = 0; i < s.size(); i++) {

        if (s[i] == 'a'|| s[i] == 'e'|| s[i] == 'i'|| s[i] == 'o'|| s[i] == 'u') {
            //skips vowels
        }
        else {
            s2 = s[i];
        }
    }
    cout << s2;
}

int main() // cout << "\n";
{

    int menuInput;
    int num1;
    int num2;
    string sin;
    
    cin.clear();

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
        cin.ignore();
        getline(cin, sin);
        cout << "Thank you.\n";
        gnirts(sin);
        break;
    case 3:
        cout << "(3) Vowel remover.\n\n";
        cout << "Please enter string to remove vowels from.\n";
        cin.ignore();
        getline(cin, sin);
        cout << "Thank you.\n";
        strng(sin);
        break;
    default:
        cout << "(Any others) Exit.";
        break;
    }
}