class Solution {
public:
    void getAns(vector<int>& nums, vector<vector<int>>& sol, vector<int>& crnt, int index = 0) {
        if (index == nums.size())
        {
            sol.push_back(crnt);
            return;
        }
        crnt.push_back(nums[index]);
        getAns(nums, sol, crnt, index + 1);
        crnt.pop_back();
        getAns(nums, sol, crnt, index + 1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> sol;
        vector<int>z;
        getAns(nums, sol, z);
        return sol;
    }
};