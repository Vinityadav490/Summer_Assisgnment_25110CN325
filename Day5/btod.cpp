#include <iostream>
#include <string>
using namespace std;

int binaryToDecimal(string bin) {
    int result = 0;

    for (char c : bin) {
        result = result * 2 + (c - '0');
    }
    return result;
}
int main() {
    string bin;
    cin >> bin;
    cout << "Decimal: " << binaryToDecimal(bin);
    return 0;
}