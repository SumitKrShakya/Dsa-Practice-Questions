class Solution {
public:
    int j = 1;
    int removeDuplicates(vector<int>& nums) {
        for(int i=1;i<nums.size();i++)
            if(nums[i]!=nums[i-1])
                nums[j++]=nums[i];
        return j;
    }
};