class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        map<int,int>mp;
        int sum=0;
        mp[sum]=-1;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]){
                sum++;
            }else{
                sum--;
            }
            if(mp.count(sum)){
                ans=max(ans,abs(mp[sum]-i));
            }else{
                mp[sum]=i;
            }
        }
        return ans;
    }
};