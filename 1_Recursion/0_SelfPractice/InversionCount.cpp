#include <bits/stdc++.h>

using namespace std;

int crossinversion(int *a, int s, int e)
{
    int m = (s + e) / 2;

    int i = s;
    int j = m + 1;
    int k = s;

    int temp[100];
    int count = 0;
    while (i <= m && j <= e)
    {
        if (a[i] > a[j])
        {
            temp[k++] = a[j++];
            count += m - i + 1;
        }
        else
        {
            temp[k++] = a[i++];
        }
    }
    while (i <= m)
    {
        temp[k++] = a[i++];
    }
    while (j <= e)
    {
        temp[k++] = a[j++];
    }

    for (int i = s; i <= e; i++)
    {
        a[i] = temp[i];
    }

    return count;
}

int inversion(int *a, int s, int e)
{
    if (s >= e)
        return 0;
    int m = (s + e) / 2;
    int x = inversion(a, s, m);
    int y = inversion(a, m + 1, e);
    int z = crossinversion(a, s, e);
    // cout << "x=" << x << " y=" << y << " z=" << z << endl;
    return x + y + z;
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
    cout << inversion(a, 0, n - 1);

    return 0;
}