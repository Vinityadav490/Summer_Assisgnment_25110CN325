#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main() {
    int n;
    cin >> n;
    for (int i = n; i >= 2; i--) {
        if (isPrime(i)) {
            cout << "Largest prime <= " << n << " is: " << i;
            break;
        }
    }
    return 0;
}