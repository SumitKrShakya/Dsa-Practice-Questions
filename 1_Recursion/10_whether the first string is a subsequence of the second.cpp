#include <bits/stdc++.h>

using namespace std;

string subsequence(string s1, int S1, string s2, int S2)
{
    if (S1 == 0)
    {
        return "True";
    }
    if (S2 == 0)
    {
        return "False";
    }

    if (s1[S1 - 1] == s2[S2 - 1])
    {
        return subsequence(s1, S1 - 1, s2, S2 - 1);
    }
    return subsequence(s1, S1, s2, S2 - 1);
}

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    cout << subsequence(s1, s1.length(), s2, s2.length());
    return 0;
}