#include <iostream>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    int freq1[256] = {0};
    int freq2[256] = {0};

    for (char c : s1) freq1[c]++;
    for (char c : s2) freq2[c]++;

    cout << "Common Characters: ";

    for (int i = 0; i < 256; i++) {
        if (freq1[i] > 0 && freq2[i] > 0) {
            cout << (char)i << " ";
        }
    }

    return 0;
}