#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    string result = "";

    for (int i = 0; i < s.length(); i++) {
        int count = 1;

        while (i < s.length() - 1 && s[i] == s[i + 1]) {
            count++;
            i++;
        }

        result += s[i];
        result += to_string(count);
    }

    cout << result;

    return 0;
}