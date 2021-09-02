#include <bits/stdc++.h>

using namespace std;
int alpha = 0;
int lastoccor(int num, int n, int *arr, int i)
{
    if (i < 0)
    {
        return -1;
    }
    if (arr[i] == num)
    {
        return i;
    }
    return lastoccor(num, n, arr, i - 1);
}

int main()
{
    int num, n;
    cin >> num >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << lastoccor(num, n, arr, n - 1);
}