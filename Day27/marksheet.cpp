#include <iostream>
using namespace std;

int main() {
    int m1, m2, m3;

    cin >> m1 >> m2 >> m3;

    int total = m1 + m2 + m3;
    float avg = total / 3.0;

    cout << "Total = " << total << endl;
    cout << "Average = " << avg << endl;

    if (avg >= 90)
        cout << "Grade A";
    else if (avg >= 75)
        cout << "Grade B";
    else if (avg >= 50)
        cout << "Grade C";
    else
        cout << "Fail";

    return 0;
}