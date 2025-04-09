class Solution {
public:
    int findPeakElement(vector<int>& nums) 
    {
        //using binary search
        int n=nums.size();
        int  l=0;
        int r=n-1;
        while(r>l)
        {
           int mid=(l+r)/2;
            if(nums[mid+1]>nums[mid])
            {
                l=mid+1;
            }
            else
            {
                r=mid;
            }
        }
        return l;

    }
};