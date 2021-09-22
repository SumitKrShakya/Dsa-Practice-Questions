#include <bits/stdc++.h>

using namespace std;

string reverseString(string s)
{
    int n = (s.size()) - 1;
    for (int i = 0; i < n; i++)
    {
        swap(s[i], s[n--]);
    }
    return s;
}

int main()
{
    string s;
    cin >> s;
    cout <<reverseString(s);

        return 0;
}