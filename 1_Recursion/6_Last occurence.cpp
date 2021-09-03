#include <bits/stdc++.h>

using namespace std;

// online method
int lastoccor(int *arr, int n, int key)
{
    if (n == 0)
    {
        return -1;
    }
    int i = lastoccor(arr + 1, n - 1, key);

    if (i == -1)
    {
        if (arr[0] == key)
        {
            return 0;
        }
        else
        {
            return -1;
        }
    }

    return i + 1;
}

// int alpha = 0;
// int lastoccor(int num, int n, int *arr, int i)
// {
//     if (i < 0)
//     {
//         return -1;
//     }
//     if (arr[i] == num)
//     {
//         return i;
//     }
//     return lastoccor(num, n, arr, i - 1);
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
    cout << lastoccor(arr, n, num);
}