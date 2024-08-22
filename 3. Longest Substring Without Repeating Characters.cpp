class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int sol=(s.size()?1:0);
            map<char,bool>mapo;
            int st=0;
        for(int i=0;i<s.size();i++)
        {
                if(mapo[s[i]])
                {
                  while(mapo[s[i]])
                  {
                    mapo[s[st++]]=0;
                  }
                }
                    mapo[s[i]]=1;
                    sol=max(sol,i-st+1);
            }

        return sol;
    }
};