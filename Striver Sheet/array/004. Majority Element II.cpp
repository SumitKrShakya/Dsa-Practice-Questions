#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int>mp;
        vector<int>ans;
        for(auto x:nums){
            mp[x]++;
            if(mp[x] == (nums.size()/3)+1) ans.push_back(x);
        }
        return ans;
    }
};