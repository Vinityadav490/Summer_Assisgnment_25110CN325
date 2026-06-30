#include <iostream>
using namespace std;


void addEmployee(int id[], string name[], int salary[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "\nEnter Employee ID: ";
        cin >> id[i];

        cout << "Enter Employee Name: ";
        cin >> name[i];

        cout << "Enter Salary: ";
        cin >> salary[i];
    }
}


void displayEmployee(int id[], string name[], int salary[], int n) {
    cout << "\nEmployee Records\n";
    cout << "ID\tName\tSalary\n";

    for (int i = 0; i < n; i++) {
        cout << id[i] << "\t"
             << name[i] << "\t"
             << salary[i] << endl;
    }
}


void searchEmployee(int id[], string name[], int salary[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (id[i] == key) {
            cout << "\nEmployee Found\n";
            cout << "ID: " << id[i] << endl;
            cout << "Name: " << name[i] << endl;
            cout << "Salary: " << salary[i] << endl;
            return;
        }
    }

    cout << "\nEmployee Not Found";
}

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    int id[n], salary[n];
    string name[n];

    addEmployee(id, name, salary, n);

    displayEmployee(id, name, salary, n);

    int key;
    cout << "\nEnter Employee ID to search: ";
    cin >> key;

    searchEmployee(id, name, salary, n, key);

    return 0;
}