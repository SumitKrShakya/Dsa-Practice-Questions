#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    int val;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int r = n - 1, l = 0;
    for (int i = 0; i <= r; i++) {
        if (a[i] == 2) {
            swap(a[i], a[r]);
            r--;
            i--;
        }
        else if (a[i] == 0) {
            swap(a[i], a[l]);
            l++;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << a[i]<<" ";
    }

    return 0;
}