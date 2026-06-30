#include <iostream>
using namespace std;

int main() {
    int basic, da, hra, tax;

    cin >> basic >> da >> hra >> tax;

    int gross = basic + da + hra;
    int net = gross - tax;

    cout << "Gross Salary = " << gross << endl;
    cout << "Net Salary = " << net;

    return 0;
}