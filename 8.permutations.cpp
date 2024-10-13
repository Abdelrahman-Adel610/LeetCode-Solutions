class Solution {
public:
    void ans(vector<vector<int>>& sol, vector<int>& nums, vector<bool>& visited, vector<int>& crnt)
    {
        if (crnt.size() == nums.size())
        {
            sol.push_back(crnt);
            return;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (!visited[i])
            {
                visited[i] = 1;
                crnt.push_back(nums[i]);
                ans(sol, nums, visited, crnt);
                crnt.pop_back();
                visited[i] = 0;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>sol;
        vector<int>crnt;
        vector<bool>v(nums.size(), 0);
        ans(sol, nums, v, crnt);
        return sol;
    }
};