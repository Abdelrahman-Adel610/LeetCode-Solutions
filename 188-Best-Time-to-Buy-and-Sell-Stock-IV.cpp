class Solution {
public:

    int solve(vector<vector<vector<int>>>&dp,vector<int>&prices,bool canBuy,int k,int day)
    {
        if(k==0)
        return 0;
        if(day==prices.size())return 0;
        if( dp[day][k][canBuy])return dp[day][k][canBuy];
        int p1=0;
        int p2=0;
        int p3=0;
        if(canBuy)
         p1=max(p1,solve(dp,prices,0,k,day+1)-prices[day]);
        else
         p2=max(p2,solve(dp,prices,1,k-1,day+1)+prices[day]);
         p3=max(p3,solve(dp,prices,canBuy,k,day+1));
         return   dp[day][k][canBuy]= max({p1,p2,p3});
    }
    int maxProfit(int k, vector<int>& prices) {
        vector<vector<vector<int>>>dp(prices.size()+1,vector<vector<int>>(k+1,vector<int>(2,0)));
       return solve(dp,prices,1,k,0);
    }
};