#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    // USING SWAP //

    // for (int i = 0; i < n; i++){
    //     cin >> a[i];
    // }
    // int arr[n];
    // for(int i=0;i<n/2;i++){
    //     swap(a[i],a[n-i-1]);
    // }
    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }

    // USING MAP //

    map<int, int> mp;
    int val;
    for (int i = 0; i < n; i++){
        cin >> val;
        mp.insert(make_pair(i, val));
    }
    map<int, int> rmp;

    for(auto it=mp.rbegin();it!=mp.rend();it++){
        cout<<it->second<<" ";
    }

    return 0;
}