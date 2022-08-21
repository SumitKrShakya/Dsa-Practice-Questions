#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans(2);
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                break;
                if(nums[i]>nums[j]){
                    swap(nums[i],nums[j]);
                }
            }
        }
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                // if(nums[i]+nums[j]>target)break;
                if(i!=j){
                    if(nums[i]+nums[j]==target){
                        ans[0]=i;
                        ans[1]=j;
                        return ans;
                    }
                }
            }
        }
        
        
        return ans;
    }
};