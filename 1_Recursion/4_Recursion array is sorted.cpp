#include <bits/stdc++.h>

using namespace std;

bool sortChecker(int n, int *arr)
{
    if (n == 1 || n == 0)
    {
        return true;
    }
    if (arr[0] < arr[1] && sortChecker(n - 1, arr + 1))
    {
        return true;
    }
    return false;
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
    cout << ((sortChecker(n, arr) == true) ? "True" : "false");
}