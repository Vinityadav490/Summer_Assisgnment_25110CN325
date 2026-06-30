#include <iostream>
using namespace std;

struct Employee {
    int id;
    string name;
    int salary;
};

int main() {
    int n;
    cin >> n;

    Employee e[n];

    for (int i = 0; i < n; i++) {
        cin >> e[i].id >> e[i].name >> e[i].salary;
    }

    cout << "\nEmployee Records:\n";

    for (int i = 0; i < n; i++) {
        cout << e[i].id << " " << e[i].name << " " << e[i].salary << endl;
    }

    return 0;
}