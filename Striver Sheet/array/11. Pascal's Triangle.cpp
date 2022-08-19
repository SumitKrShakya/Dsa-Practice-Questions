// class Solution {
// public:
//     vector<vector<int>> generate(int numRows) {
//         vector<vector<int>>ans={{1}};
//         vector<int>level;
//         int r=2;
//         while(r<=numRows){
//             vector<int>prev=ans[r-2];
//             for(int i=0;i<r;i++){
//                 if(i==0){
//                     level.clear();
//                     level={1};
//                 }
//                 else if(i==r-1){
//                     level.push_back(1);
//                 }
//                 else{
//                     level.push_back(prev[i-1]+prev[i]);
//                     cout<<prev[i-1]+prev[i]<<" ";
//                 }
//             }
//             cout<<endl;
//             ans.push_back(level);            
//             r++;
//         }
//         return ans;
//     }
// };


class Solution {
public:
    
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for (int i = 0; i < numRows; i++) {
            vector<int> row(i + 1, 1);
            for (int j = 1; j < i; j++) {
                row[j] = ans[i - 1][j] + ans[i - 1][j - 1];
            }
            ans.push_back(row);
	    }
        return ans;
    }
};