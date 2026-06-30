#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a[n], b[m];
    int c[200];
    int k = 0;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < m; i++)
        cin >> b[i];

    for (int i = 0; i < n; i++)
        c[k++] = a[i];

    for (int i = 0; i < m; i++) {
        bool found = false;
        for (int j = 0; j < k; j++) {
            if (b[i] == c[j]) {
                found = true;
                break;
            }
        }
        if (!found)
            c[k++] = b[i];
    }

    for (int i = 0; i < k; i++)
        cout << c[i] << " ";

    return 0;
}