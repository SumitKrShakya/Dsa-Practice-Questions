#include <bits/stdc++.h>

using namespace std;

int parti(int *a, int s, int e)
{
    // if(s>=e){
    //     return s;
    // }

    int i = s - 1, j = s, p = a[e];
    for (; j < e; j++)
    {
        if (a[j] < p)
        {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[e], a[i + 1]);
    return i + 1;
}

void qsort(int *a, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    // cout << "here";
    int p = parti(a, s, e);
    // cout << p << " " << a[p] << endl;
    qsort(a, s, p - 1);
    qsort(a, p + 1, e);
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
    qsort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}