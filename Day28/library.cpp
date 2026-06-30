#include <iostream>
using namespace std;

struct Book {
    int id;
    string name;
};

int main() {
    int n;
    cin >> n;

    Book b[n];

    for (int i = 0; i < n; i++) {
        cin >> b[i].id >> b[i].name;
    }

    cout << "\nLibrary Books:\n";

    for (int i = 0; i < n; i++) {
        cout << b[i].id << " " << b[i].name << endl;
    }

    return 0;
}