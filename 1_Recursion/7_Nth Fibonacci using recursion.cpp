#include <bits/stdc++.h>

using namespace std;

int nfibo(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    int f1 = nfibo(n - 1);
    int f2 = nfibo(n - 2);
    return f1 + f2;
}

int main()
{
    int n;
    cin >> n;
    cout << nfibo(n);
}