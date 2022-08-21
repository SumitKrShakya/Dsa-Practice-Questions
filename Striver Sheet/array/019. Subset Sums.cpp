#include<bits/stdc++.h>
using namespace std;

vector<int> subsetSums(vector<int> arr, int n)
    {
        // Write Your Code here
        if(n<=0)
        {
            vector<int>ans;
            ans.push_back(0);
            return ans;
        }
        vector<int>smallans=subsetSums(arr,n-1);
        int size=smallans.size();
        for(int i=0;i<size;i++)
        {
            smallans.push_back(arr[n-1]+smallans[i]);
        }
        return smallans;
    }