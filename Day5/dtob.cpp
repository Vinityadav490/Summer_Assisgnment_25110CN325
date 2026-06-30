#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string binary = "";
    for (int i = 31; i >= 0; i--) {
        int bit = (n >> i) & 1;
        binary += to_string(bit);
    }
    int pos = binary.find('1');
    if (pos != string::npos)
        cout << binary.substr(pos);
    else
        cout << "0";
    return 0;
}