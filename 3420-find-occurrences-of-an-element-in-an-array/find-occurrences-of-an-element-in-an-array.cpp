class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int>oneindex;
        vector<int>output;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==x)
            {
                count++;
                oneindex.push_back(i);
            }
        }
        for(int j=0;j<queries.size();j++)
        {
         if(queries[j]<=count)
         {
           output.push_back(oneindex[queries[j]-1]);
         }  
         else
         {
            output.push_back(-1);
         } 
        }
        return output;
    }
};