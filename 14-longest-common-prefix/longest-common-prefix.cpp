class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        //method 2 by using sorting of the string 
        int len =s.size();
        int i=0;
        sort(s.begin(),s.end());
        string res="";
        while(i<s[0].size() && s[0][i]==s[len-1][i] )
        {
            res+=s[0][i];
            i++;
        }
        return res;
        /**
        int len=strs[0].size();
        string res="";
        for(int i=0;i<len;i++)
        {
            for(int j=0;j<strs.size()-1;j++)
            {
                if(strs[j][i] != strs[j+1][i])
                {
                    return res;
                }
            }
            res+=strs[0][i];
        
        }
        return res ;**/
    }
};