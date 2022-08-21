#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
        int n=nums.size()/2;
        for(int ele:nums){
            mp[ele]++;
            if(mp[ele]>n)
                return ele;
        }
        return n;
    }
};