class Solution {
public:
    bool checkInclusion(string s1, string s2) {
    vector<int>fr1(26,0);
    vector<int>fr2(26,0);
    int n=s1.size();
    if(n>s2.size())return false;
    for(auto i:s1)
    {
        fr1[i-'a']++;
    }
    for(int i=0;i<n;i++)
    {
        fr2[s2[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(fr1[i]!=fr2[i])break;
        if(i==25)return true;
    }
       for(int i=n;i<s2.size();i++)
   {
    fr2[s2[i-n]-'a']--;
    fr2[s2[i]-'a']++;
      for(int j=0;j<26;j++)
    {
        if(fr1[j]!=fr2[j])break;
        if(j==25)return true;
    }
   }
return false;
}};