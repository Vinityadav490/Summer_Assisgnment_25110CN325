#include <iostream>
using namespace std;

struct Contact {
    string name;
    long long phone;
};

int main() {
    int n;
    cin >> n;

    Contact c[n];

    for (int i = 0; i < n; i++) {
        cin >> c[i].name >> c[i].phone;
    }

    cout << "\nContacts:\n";

    for (int i = 0; i < n; i++) {
        cout << c[i].name << " " << c[i].phone << endl;
    }

    return 0;
}