#include <iostream>
using namespace std;

int findMax(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}
int main() {
    int x, y;
    cin >> x >> y;
    cout << "Maximum: " << findMax(x, y);
    return 0;
}