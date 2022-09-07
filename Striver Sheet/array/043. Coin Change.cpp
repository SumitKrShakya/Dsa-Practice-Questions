#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int coinChange(vector<int>& coins, int am) {
        int n =coins.size();
        int dp[n+1][am+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<am+1;j++){
                
                if(i==0){
                    dp[i][j]=INT_MAX-1;
                }
                if(j==0){
                    dp[i][j]=0;
                }
            }
        }
        for(int i=1;i<n+1;i++){
            for(int j=1;j<am+1;j++){
                if(coins[i-1]<=j)
                    dp[i][j] = min(dp[i-1][j], dp[i][j-coins[i-1]] + 1);
                else
                    dp[i][j] = dp[i-1][j] ;
            }
        }
    
    return dp[n][am]==INT_MAX-1? -1:dp[n][am];
    }
    
};