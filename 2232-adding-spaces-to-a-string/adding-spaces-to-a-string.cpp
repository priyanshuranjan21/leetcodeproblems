class Solution {
public:
    string addSpaces(string s, vector<int>& space) {
        int len=s.size();
        int n=space.size();
        string res;
        int f=0;
        int f1=0;
        while(f<len)
        {
            if(f1<n && f==space[f1] )
            {
                res.push_back(' ');
                f1++;
            }
            res.push_back(s[f]);
            f++;
        }
        return res;
    }
};