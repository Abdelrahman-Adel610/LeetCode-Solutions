class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int i=0;
        int j=0;
        int c=0;
        while(i<word1.size() || j<word2.size())
        {
            if(i==word1.size())
            {
                ans+=word2[j++];
            }
            else if(j==word2.size())
            {
                ans+=word1[i++];
            }
            else
            {
                if(!(c&1))
                {
                    ans+=word1[i++];
                }
                else ans += word2[j++];
            }
            c++;
        }
        return ans;
        }

};