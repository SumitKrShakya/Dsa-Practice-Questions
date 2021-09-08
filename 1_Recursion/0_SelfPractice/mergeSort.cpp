#include <bits/stdc++.h>

using namespace std;
int t = 0;
void sorter(int *arr, int s, int e)
{

    int m = (s + e) / 2;

    int i = s;
    int j = m + 1;
    int k = s; // ???
    // int n = sizeof(arr) / sizeof(arr[0]);
    // cout << "s=" << s << " e=" << e << " m=" << m << endl;
    int temp[e];
    while (i <= m && j <= e)
    {
        if (arr[i] < arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }
    while (i <= m)
        temp[k++] = arr[i++];

    while (j <= e)
        temp[k++] = arr[j++];

    // cout << endl;

    for (int i = s; i <= e; i++)
    {
        // cout << temp[i] << " ";
        arr[i] = temp[i];
    }
    cout << endl;
}

void mergesort(int *arr, int s, int e)
{
    if (s >= e)
        return;
    int m = (s + e) / 2;
    mergesort(arr, s, m);
    mergesort(arr, m + 1, e);
    sorter(arr, s, e);
}

int main()
{

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    mergesort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}