class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int freq = 1;
        int temp = INT_MAX;
        int reducer=0;
        int p=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[p]){
                freq++;
                if(freq>=3){
                    nums[i]=temp;
                    reducer++;
                }
            }else{
                freq=1;
                p=i;
            }
        }
        
        int ans=nums.size()-reducer;
        sort(nums.begin(),nums.end());
        return ans;
    }
};