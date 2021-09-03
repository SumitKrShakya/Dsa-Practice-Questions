#include <bits/stdc++.h>

using namespace std;

bool palchecker(string a, int s, int e)
{
    if (s == e)
        return true;
    if (a[s] != a[e])
        return false;
    if (s < e + 1)
        return palchecker(a, s + 1, e - 1);
    return true;
}

int main()
{
    string s;
    cin >> s;
    cout << palchecker(s, 0, s.length() - 1);

    return 0;
}