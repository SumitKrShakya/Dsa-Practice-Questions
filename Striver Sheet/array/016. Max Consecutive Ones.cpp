#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = INT_MIN;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int cnt = 0;
            while(i<n && nums[i]==1){
                i++;
                cnt++;
            }
            ans = max(cnt, ans);
        }
        return ans;
    }
};