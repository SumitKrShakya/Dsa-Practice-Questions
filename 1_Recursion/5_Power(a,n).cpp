#include <bits/stdc++.h>

using namespace std;

int powerRecur(int a, int n)
{
    if (n == 1)
    {
        return a;
    }
    return a * powerRecur(a, n - 1);
}

int main()
{
    int long long a, n;
    cin >> a >> n;
    cout << powerRecur(a, n);
}