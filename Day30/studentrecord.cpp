#include <iostream>
using namespace std;

void input(int roll[], string name[], int marks[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Enter Roll No: ";
        cin >> roll[i];

        cout << "Enter Name: ";
        cin >> name[i];

        cout << "Enter Marks: ";
        cin >> marks[i];
    }
}

void display(int roll[], string name[], int marks[], int n) {
    cout << "\nStudent Records\n";
    cout << "Roll\tName\tMarks\n";

    for (int i = 0; i < n; i++) {
        cout << roll[i] << "\t"
             << name[i] << "\t"
             << marks[i] << endl;
    }
}

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    int roll[n], marks[n];
    string name[n];

    input(roll, name, marks, n);
    display(roll, name, marks, n);

    return 0;
}