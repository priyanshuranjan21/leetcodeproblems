class Solution {
public:
    bool isAnagram(string s, string t)
    {
        map<char,int>malti1;
        map<char,int>malti2;
        for(auto s1:s)
        {
            malti1[s1]++;
        }
        for(auto t1:t)
        {
            malti2[t1]++;
        }

        if(malti1==malti2)
        {
            return true;
        }

        return false;

    }
};