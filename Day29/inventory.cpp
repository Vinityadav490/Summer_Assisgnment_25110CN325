#include <iostream>
using namespace std;

struct Item {
    int id;
    string name;
    int quantity;
};

int main() {
    int n;
    cin >> n;

    Item item[n];

    for (int i = 0; i < n; i++) {
        cin >> item[i].id >> item[i].name >> item[i].quantity;
    }

    cout << "\nInventory:\n";

    for (int i = 0; i < n; i++) {
        cout << item[i].id << " "
             << item[i].name << " "
             << item[i].quantity << endl;
    }

    return 0;
}