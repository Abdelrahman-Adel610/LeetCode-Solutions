class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    long long p=1;
    // for(auto i:nums)p*=i;
    vector<int>acc(nums.size(),1);
    for(int i=0;i<nums.size();i++)
    {
        acc[i]=p;
        p*=(nums[i]);
    }
    p=1;
    for(int i=nums.size()-1;i>=0;i--)
    {
        acc[i]*=p;
         p*=(nums[i]);
    }
    return acc;
    }
    // 1 2 6 24
    // 24 24 12 4
};