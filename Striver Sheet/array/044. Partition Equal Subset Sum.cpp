#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canPartition(vector<int>& coins) {
        int sum = 0;
        for(auto x:coins){
            sum+=x;
        }
        
        if(sum%2==1){
            return false;
        }
        
        int am = sum/2;
        int n = coins.size();
        int dp[n+1][am+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<am+1;j++){
                if(i==0){
                    dp[i][j]=0;
                }
                if(j==0){
                    dp[i][j]=1;
                }
            }
        }
        for(int i=1;i<n+1;i++){
            for(int j=1;j<am+1;j++){
                if(coins[i-1]<=j)
                    dp[i][j] = dp[i-1][j] || dp[i-1][j-coins[i-1]] ;
                else
                    dp[i][j] = dp[i-1][j] ;
            }
        }
    
        return dp[n][am];
    }
};