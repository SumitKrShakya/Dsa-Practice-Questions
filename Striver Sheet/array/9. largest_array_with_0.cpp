#include<bits/stdc++.h>
using namespace std;

int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        unordered_map<int , int> mp;
        int ans =0;
        int sum =0;
        
        for(int i=0;i<n;i++)
        {
            sum+=A[i];
            if(mp.find(sum)==mp.end()) mp[sum] = i;
            
            if(sum == 0) ans = max(ans , i+1);
            if(mp.find(sum)!=mp.end()) ans = max( ans , i-mp[sum] );
            
        }
        return ans ;
    }