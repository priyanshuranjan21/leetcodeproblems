class Solution {
public:
    int firstUniqChar(string s) {
        int index;
        // we can solve it by using map value 
        map<char,int>malti;
        for( auto p :s)
        {
            malti[p]++;
        }
        for(int i=0;i<s.length();i++)
        {
            if(malti[s[i]]==1)
            {
                return i;
            }
        }
        return -1;
    }
};