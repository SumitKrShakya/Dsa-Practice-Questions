#include <bits/stdc++.h>

using namespace std;

int n = 0;

int abhi(int m)
{
    if (m == 1)
    {
        return 1;
    }
    if (m == 2)
    {
        return 2;
    }
    return abhi(m - 1) + abhi(m - 2);
}

int main()
{
    int m = 0;
    cin >> m;
    cout << abhi(m);

    return 0;
}
