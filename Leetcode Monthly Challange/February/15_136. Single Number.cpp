// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         for(int i=1;i<nums.size();i++){
//             if(nums[i-1]!=nums[i])
//                 return nums[i-1];
//             i++;
//         }
//         return nums[nums.size()-1];
//     }
// };
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int answer = nums[0];
        for(int i = 1; i < nums.size(); i++)
            answer ^= nums[i];
        return answer;
    }
};