#include <iostream>
using namespace std;

void addBooks(int id[], string title[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Enter Book ID: ";
        cin >> id[i];

        cout << "Enter Book Title: ";
        cin >> title[i];
    }
}

void displayBooks(int id[], string title[], int n) {
    cout << "\nLibrary Books\n";
    cout << "ID\tTitle\n";

    for (int i = 0; i < n; i++) {
        cout << id[i] << "\t" << title[i] << endl;
    }
}

void searchBook(int id[], string title[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (id[i] == key) {
            cout << "\nBook Found\n";
            cout << "ID: " << id[i] << endl;
            cout << "Title: " << title[i] << endl;
            return;
        }
    }

    cout << "\nBook Not Found";
}

int main() {
    int n;
    cout << "Enter number of books: ";
    cin >> n;

    int id[n];
    string title[n];

    addBooks(id, title, n);

    displayBooks(id, title, n);

    int key;
    cout << "\nEnter Book ID to search: ";
    cin >> key;

    searchBook(id, title, n, key);

    return 0;
}