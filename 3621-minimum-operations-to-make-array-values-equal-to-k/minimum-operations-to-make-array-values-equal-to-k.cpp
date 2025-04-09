class Solution {
public:
    int minOperations(vector<int>& nums, int k)
    {
          unordered_set<int>sanket;
          for(auto i:nums)
          {
            if(i<k)
            {
                return -1;
            }
            else if(i>k)
            {
                sanket.insert(i);
            }
          }  
        return sanket.size();
    }
};