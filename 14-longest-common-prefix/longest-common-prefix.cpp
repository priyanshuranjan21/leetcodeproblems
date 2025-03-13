class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
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
        return res ;
    }
};