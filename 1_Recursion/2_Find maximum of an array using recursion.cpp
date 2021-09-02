#include <bits/stdc++.h>

using namespace std;

int reversearr(int n, int *arr, int i)
{
    if (i == n)
    {
        return arr[i - 1];
    }
    return max(arr[i - 1], reversearr(n, arr, i + 1));
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
    cout << reversearr(n, arr, 0);
}