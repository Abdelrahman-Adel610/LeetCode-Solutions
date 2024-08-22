class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>>nms;
        vector<int>sol;
        for (int i = 0; i < nums.size(); i++)
        {
            nms.push_back({ nums[i],i });
        }
        sort(nms.begin(), nms.end());
        int i = 0;
        int j = nums.size() - 1;
        while (1)
        {
            if (nms[i].first + nms[j].first == target)
            {
                sol.push_back(nms[i].second);
                sol.push_back(nms[j].second);
                break;
            }
            else if (nms[i].first + nms[j].first > target)
            {
                j--;
            }
            else i++;
        }
        return sol;
    }
};