#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int ttyl = 1; ttyl <= t; ttyl++)
    {
        int number, ttrryy;
        vector<int> vectorvec;
        cin >> number;
        for (int i = 0; i < number; i++)
        {
            cin >> ttrryy;
            vectorvec.push_back(ttrryy);
        }
        int i = 0;
        sort(vectorvec.begin(), vectorvec.end());
        for (auto x : vectorvec)
        {
            i++;
            if (i > x)
            {
                i--;
            }
        }
        cout << "Case #" << ttyl << ": ";
        cout << i << endl;
    }
    return 0;
}