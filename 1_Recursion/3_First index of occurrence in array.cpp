#include <bits/stdc++.h>

using namespace std;

int reversearr(int num, int n, int *arr, int i)
{
    if (arr[i] == num)
    {
        return i;
    }
    return reversearr(num, n, arr, i + 1);
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
    cout << reversearr(num, n, arr, 0);
}