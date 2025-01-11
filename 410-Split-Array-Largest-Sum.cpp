class Solution {
public:
    int solve(vector<int>&nums,vector<vector<int>>&dp,int st=0,int m=0)
    {

        if(m==0 && st==nums.size()) return 0;
        if(st==nums.size()||m<=0)return INT_MAX;
        if(dp[st][m]) return dp[st][m];
        int sol=INT_MAX;
        int acc=0;
        for(int i=st;i<nums.size();++i)
        {
            acc+=nums[i];
            if(acc>=sol)break;
            int z=solve(nums,dp,i+1,m-1);
             sol=min(sol,max(acc,z));
        }
        return dp[st][m]=sol;
    }
    int splitArray(vector<int>& nums, int k) {
        int total=0;
        vector<vector<int>>dp(nums.size()+1,vector<int>(k+1,0));
        for(auto i:nums)total+=i;
        return solve(nums,dp,0,k);
    }
};