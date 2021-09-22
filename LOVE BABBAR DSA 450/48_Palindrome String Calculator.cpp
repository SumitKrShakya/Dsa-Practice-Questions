#include <bits/stdc++.h>

using namespace std;

int isPalindrome(string s)
{
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if(s[i]!= s[--n]){
            return 0;
        }
    }
    return 1;
}

int main()
{
    string s;
    cin >> s;
    cout <<isPalindrome(s);

    return 0;
}