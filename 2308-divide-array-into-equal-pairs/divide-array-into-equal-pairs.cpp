class Solution {
public:
    bool divideArray(vector<int>& nums)
    {
        int pair=0;
        int len=nums.size();
        int n=len/2;
        unordered_map<int,int>res;
        for(auto p:nums)
        {
            res[p]++;
        }
        for( auto s:res)
        {
            if(s.second %2==0)
            {
                pair+=s.second/2;
            }
        }
    if(pair==n) return true;
    else return false;
        
    }
};