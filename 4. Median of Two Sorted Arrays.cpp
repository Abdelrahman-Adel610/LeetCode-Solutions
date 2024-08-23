class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
    {
        //even (n/2+n/2-1)
        //odd(n+1)/2   
        int it1 = 0;
        int it2 = 0;
        int c = 0;
        int sol = 0;
        bool state = (nums1.size() + nums2.size()) % 2;
        for (int i = 0; i < nums1.size() + nums2.size(); i++)
        {
            if (it1 < nums1.size() && (it2 >= nums2.size() || nums1[it1] < nums2[it2]))
            {
                if (state && c == (nums1.size() + nums2.size()) / 2)
                {
                    sol += nums1[it1];
                }
                if (!state && (c == (nums1.size() + nums2.size()) / 2 || c == (nums1.size() + nums2.size()) / 2 - 1))
                {
                    sol += nums1[it1];
                }

                it1++;
            }
            else
            {
                if (state && c == (nums1.size() + nums2.size()) / 2)
                {
                    sol += nums2[it2];
                }
                if (!state && (c == (nums1.size() + nums2.size()) / 2 || c == (nums1.size() + nums2.size()) / 2 - 1))
                {
                    sol += nums2[it2];
                }
                it2++;
            }
            c++;
        }
        if (state)
            return sol;
        else
            return sol * 1.0 / 2.0;
    }
};