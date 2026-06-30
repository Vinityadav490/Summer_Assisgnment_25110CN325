#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    int temp[n];
    int k = 0;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++) {

        bool found = false;

        for (int j = 0; j < k; j++) {
            if (arr[i] == temp[j]) {
                found = true;
                break;
            }
        }

        if (!found) {
            temp[k++] = arr[i];
        }
    }

    cout << "Array after removing duplicates: ";

    for (int i = 0; i < k; i++)
        cout << temp[i] << " ";

    return 0;
}