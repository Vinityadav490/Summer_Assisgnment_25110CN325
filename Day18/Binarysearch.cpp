#include <iostream>
using namespace std;

int main() {
    int n, key;
    cin >> n >> key;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int low = 0, high = n - 1;
    int found = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            found = mid;
            break;
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    cout << "Index = " << found;

    return 0;
}