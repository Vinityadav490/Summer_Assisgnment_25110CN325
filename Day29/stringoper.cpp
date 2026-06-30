#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    int choice;
    cout << "1.Length\n2.Reverse\n3.Uppercase\n4.Palindrome\n";
    cin >> choice;

    switch (choice) {

    case 1:
        cout << "Length = " << s.length();
        break;

    case 2:
        reverse(s.begin(), s.end());
        cout << s;
        break;

    case 3:
        for (char &c : s)
            c = toupper(c);
        cout << s;
        break;

    case 4: {
        string temp = s;
        reverse(temp.begin(), temp.end());

        if (temp == s)
            cout << "Palindrome";
        else
            cout << "Not Palindrome";
        break;
    }

    default:
        cout << "Invalid Choice";
    }

    return 0;
}