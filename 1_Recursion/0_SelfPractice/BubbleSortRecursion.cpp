#include <bits/stdc++.h>

using namespace std;

int n = 0;

void abhi(int *arr, int n, int j)
{
    // Base Case
    if (n == 1)
    {
        return;
    }
    if (j == n - 1)
    {
        abhi(arr, n - 1, 0);
        return;
    }

    if (arr[j] > arr[j + 1])
    {
        swap(arr[j], arr[j + 1]);
    }

    abhi(arr, n, j + 1);
    return;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    abhi(arr, n, 0);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
