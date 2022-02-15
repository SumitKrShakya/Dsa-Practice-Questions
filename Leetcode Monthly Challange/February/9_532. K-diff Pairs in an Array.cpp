class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        map<int,int>mp;
        set<pair<int,int>>st;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;        
        }
        for(int i=0;i<nums.size();i++){
            if(mp.count(nums[i]+k)){
                 if( i!=mp[nums[i]+k]){
                     if(!st.count({nums[i],nums[i]+k}) && !st.count({nums[i]+k,nums[i]})) {
                         ans++;
                        st.insert({nums[i],nums[i]+k});
                     }
                 }
            }
        }
        return ans;
    }
};