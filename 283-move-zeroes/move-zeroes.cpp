class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[j]==0)
                {
                    continue;
                }
                else if(nums[j]!=0 && nums[i]==0)
                {
                    swap(nums[i],nums[j]);
                    j=nums.size();
                }
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            cout<<nums[i]<<" ";
        }
    }
};