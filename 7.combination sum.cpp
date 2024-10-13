class Solution {
public:
    void ans(vector<vector<int>>& sol, vector<int>& nums, int target, vector<int>& crnt, int index, int sum)
    {
        if (sum > target)
            return;
        if (sum == target)
        {
            sol.push_back(crnt);
            return;
        }
        for (int i = index; i < nums.size(); i++)
        {
            crnt.push_back(nums[i]);
            ans(sol, nums, target, crnt, i, sum + nums[i]);
            crnt.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>sol;
        vector<int>crnt;
        ans(sol, candidates, target, crnt, 0, 0);
        return sol;
    }
};