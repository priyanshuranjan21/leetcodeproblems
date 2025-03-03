class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n=nums.size();
        vector<string>ans;
        string app="";
        for(int i=0;i<n;i++)
        {
            int j=i;
            while(j+1<n && nums[j]==nums[j+1]-1)
            {
                j++;
            }
            if(j>i)
            {
                app+=to_string(nums[i]);
                app+="->";
                app+=to_string(nums[j]);
            }
            else
            {
                app+=to_string(nums[i]);
            }
            ans.push_back(app);
            app="";
            i=j;
        }
        return ans;
    }
};