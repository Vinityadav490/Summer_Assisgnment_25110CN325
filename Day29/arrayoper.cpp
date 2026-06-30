#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int choice;
    cout << "1.Display\n2.Sum\n3.Largest\n4.Reverse\n";
    cin >> choice;

    switch (choice) {

    case 1:
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        break;

    case 2: {
        int sum = 0;
        for (int i = 0; i < n; i++)
            sum += arr[i];
        cout << "Sum = " << sum;
        break;
    }

    case 3: {
        int mx = arr[0];
        for (int i = 1; i < n; i++)
            if (arr[i] > mx)
                mx = arr[i];
        cout << "Largest = " << mx;
        break;
    }

    case 4:
        for (int i = n - 1; i >= 0; i--)
            cout << arr[i] << " ";
        break;

    default:
        cout << "Invalid Choice";
    }

    return 0;
}