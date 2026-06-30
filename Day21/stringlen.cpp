#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int len = 0;

    while (s[len] != '\0') {
        len++;
    }

    cout << "Length = " << len;

    return 0;
}