#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int freq[256] = {0};

    for (int i = 0; i < s.length(); i++) {
        freq[s[i]]++;
    }

    char maxChar = s[0];
    int maxFreq = 0;

    for (int i = 0; i < s.length(); i++) {
        if (freq[s[i]] > maxFreq) {
            maxFreq = freq[s[i]];
            maxChar = s[i];
        }
    }

    cout << "Max Occurring Character = " << maxChar;

    return 0;
}