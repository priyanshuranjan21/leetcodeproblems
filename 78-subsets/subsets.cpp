class Solution {
    private:
    void solve(vector<int>nums,vector<int>output,int index,vector<vector<int>> &ans)
    {
        //base case for final case tk pauche ga 
        if(index>=nums.size())
        {
            ans.push_back(output);
            return ;
        }// 2 condition rhe ga 
        //excluding
        solve(nums,output,index+1,ans);
        //recursive caese including
        int element=nums[index];
        output.push_back(element);
        solve(nums,output,index+1,ans);

    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
         vector<vector<int>>ans;
         vector<int> output;
         int index=0;
         solve(nums,output,index,ans);
         return ans;
    }
};