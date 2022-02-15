class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minn=INT_MAX,ans=0;
        for(int i=0; i<prices.size(); i++){
           // cout<<ans<<" "<<minn<<" "<<prices[i]<<endl;
            minn=min(minn,prices[i]);
            ans = max(ans,prices[i]-minn);

    }
        return ans;}
};