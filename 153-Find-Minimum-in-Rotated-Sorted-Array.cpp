class Solution {
public:
    int findMin(vector<int>& nums) {
        int start=0;
        int end =nums.size()-1;
        int sol=nums[0];
        while(start<=end)
        {
            int mid=end+(start-end)/2;
                sol=min(nums[mid],sol); 
            if(nums[mid]>=nums[0])
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        return sol;
    }
};