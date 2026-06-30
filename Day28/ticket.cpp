#include <iostream>
using namespace std;

int main() {
    int seats = 10;
    int book;

    cout << "Enter tickets to book: ";
    cin >> book;

    if (book <= seats) {
        seats -= book;
        cout << "Booked Successfully\n";
    } else {
        cout << "Not enough seats\n";
    }

    cout << "Remaining seats = " << seats;

    return 0;
}