class Solution {
public:
 
string longestPalindrome(string s) {
    //searching for odd palindromes
    string sol = "";
    for (int i = 0; i < s.size() ; i++)
     {
        string curr = "";
        curr += s[i];
        if(curr.size()>sol.size())
        sol=curr;
            int start=i-1;
            int end=i+1;
        while(1) 
        {
            if (start < 0 || end >= s.size()) {
                start++;
                end--;
             if(start>=0&&end<s.size()&&end-start+1>sol.size())
                 sol=s.substr(start,end-start+1);

            break;
            }
           else if(s[start]==s[end])
           {
            start--;
            end++;
           }
           else
           {
            start++;
            end--;
            if(end-start+1>sol.size())
            sol=s.substr(start,end-start+1);
            break;
           }
        }
    }

    //searching for even palindromes
    for(int i=0;i<s.size()-1;i++)
    {
        string curr="";
        if(s[i]==s[i+1])
        {
            int start=i-1;
            int end=i+2;
            while(1)
            {
                if(start<0||end>=s.size())
                {
                start++;
                end--;
             if(start>=0&&end<s.size()&&end-start+1>sol.size())
                 sol=s.substr(start,end-start+1);
                break;
                }
                else if(s[start]==s[end])
                {
                    start--;
                    end++;
                }
                else
                {
                start++;
                end--;
             if(start>=0&&end<s.size()&&end-start+1>sol.size())
                 sol=s.substr(start,end-start+1);
                break;
                }
            }
        }
    }
    return sol;
}
      
};