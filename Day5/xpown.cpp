#include <iostream>
using namespace std;

long long power(long long x, long long n) {
    long long result = 1;
    while (n > 0) {
        if (n & 1) {
            result = result * x;
        }
        x = x *x;
        n = n >> 1;
    }
    return result;
}
int main() {
    long long x, n;
    cin >> x >> n;
    cout << power(x, n);
    return 0;
}