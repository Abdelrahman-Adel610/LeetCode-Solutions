class Solution {
public:
    void ans(int k, int n, vector<vector<int>>& sol, vector<int>& crnt, int sum = 0, int index = 0)
    {
        if (sum > n)return;
        if (crnt.size() == k)
        {
            if (sum == n)
            {
                sol.push_back(crnt);
            }
            return;
        }
        for (int i = index; i < 10; i++)
        {
            crnt.push_back(i);
            ans(k, n, sol, crnt, sum + i, i + 1);
            crnt.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>sol;
        vector<int>crnt;
        ans(k, n, sol, crnt, 0, 1);
        return sol;
    }
};