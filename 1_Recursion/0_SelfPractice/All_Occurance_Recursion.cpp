#include <bits/stdc++.h>

using namespace std;

int allOcc(int *a, int n, int *out, int j, int key, int l)
{
    if (n == 0)
    {
        return j;
    }
    if (a[0] == key)
    {
        out[j] = l;
        j = allOcc(a + 1, n - 1, out, j + 1, key, l + 1);
    }
    else
    {
        j = allOcc(a + 1, n - 1, out, j, key, l + 1);
    }
    return j;
}

int main()
{
    int k, n;
    cin >> k >> n;
    int a[n], out[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int j = allOcc(a, n - 1, out, 0, k, 0);
    for (int i = 0; i < j; i++)
    {
        cout << out[i] << " ";
    }
    return 0;
}