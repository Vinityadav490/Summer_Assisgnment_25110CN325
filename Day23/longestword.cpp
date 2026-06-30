#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    string word = "", longest = "";

    for (int i = 0; i <= s.length(); i++) {

        if (s[i] != ' ' && s[i] != '\0') {
            word += s[i];
        }
        else {
            if (word.length() > longest.length()) {
                longest = word;
            }
            word = "";
        }
    }

    cout << "Longest Word = " << longest;

    return 0;
}