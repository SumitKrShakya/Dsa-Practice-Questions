#include <bits/stdc++.h>

using namespace std;

int recc(int *arr, int num, int r, int l)
{
    int m = (r + l) / 2;
    if (arr[m] == num)
    {
        return m;
    }
    else if (arr[m] < num)
    {
        // cout << "here"<<endl;
        return recc(arr, num, r, m);
    }
    else
    {
        // cout << "here"<<endl;
        return recc(arr, num, m, l);
    }
}

int main()
{
    int n, num;
    cin >> n >> num;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << recc(arr, num, n - 1, 0);

    return 0;
}