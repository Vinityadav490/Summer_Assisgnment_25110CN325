#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a[n], b[m];
    int c[n + m];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < m; i++)
        cin >> b[i];

    int k = 0;

    for (int i = 0; i < n; i++)
        c[k++] = a[i];

    for (int i = 0; i < m; i++)
        c[k++] = b[i];

    for (int i = 0; i < n + m; i++)
        cout << c[i] << " ";

    return 0;
}