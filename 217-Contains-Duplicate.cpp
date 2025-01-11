class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
     unordered_map<int,bool>z;
     for(auto i:nums) {if(z[i])return true; z[i]=1;}
return false;
    }
};