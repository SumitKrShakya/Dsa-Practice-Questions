class Solution {
public:
    
    void call(vector<int> &nums,vector<int> subsetv, int i,vector<vector<int>> &ans ){
        if(i==nums.size()){
            ans.push_back(subsetv);
            return;
        }
        call(nums,subsetv,i+1,ans);
        subsetv.push_back(nums[i]);
        call(nums,subsetv,i+1,ans);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        call(nums,temp,0,ans);
        return ans;
    }
};