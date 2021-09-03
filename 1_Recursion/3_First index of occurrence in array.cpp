#include <bits/stdc++.h>

using namespace std;

// online method
int reversearr(int *arr, int n, int key)
{
    if (n == 0)
    {
        return -1;
    }
    if (arr[0] == key)
    {
        return 0;
    }
    int i = reversearr(arr + 1, n - 1, key);
    if (i == -1)
    {
        return -1;
    }
    return i + 1;
}

// My Method
// int reversearr(int num, int n, int *arr, int i)
// {
//     if (arr[i] == num)
//     {
//         return i;
//     }
//     return reversearr(num, n, arr, i + 1);
// }

int main()
{
    int num, n;
    cin >> num >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << reversearr(arr, n, num);
}