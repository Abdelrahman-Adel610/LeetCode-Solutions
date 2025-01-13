class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
      int mx=INT_MIN;
      for(auto i:candies)mx=max(mx,i);
      vector<bool>sol;
      for(auto i:candies)sol.push_back(i+extraCandies>=mx);
return sol;
    }
};