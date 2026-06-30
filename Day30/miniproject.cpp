#include <iostream>
using namespace std;

struct Student {
    int roll;
    string name;
    int m1, m2, m3;
};

void input(Student s[], int n) {
    for(int i = 0; i < n; i++) {
        cout << "Enter Roll Name Marks(3): ";
        cin >> s[i].roll >> s[i].name;
        cin >> s[i].m1 >> s[i].m2 >> s[i].m3;
    }
}

void display(Student s[], int n) {

    cout << "\nResult Sheet\n";

    for(int i = 0; i < n; i++) {

        int total = s[i].m1 + s[i].m2 + s[i].m3;
        float avg = total / 3.0;

        cout << "\nRoll : " << s[i].roll << endl;
        cout << "Name : " << s[i].name << endl;
        cout << "Total : " << total << endl;
        cout << "Average : " << avg << endl;

        if(avg >= 90)
            cout << "Grade : A";
        else if(avg >= 75)
            cout << "Grade : B";
        else if(avg >= 50)
            cout << "Grade : C";
        else
            cout << "Grade : Fail";

        cout << endl;
    }
}

int main() {

    int n;
    cin >> n;

    Student s[n];

    input(s, n);
    display(s, n);

    return 0;
}