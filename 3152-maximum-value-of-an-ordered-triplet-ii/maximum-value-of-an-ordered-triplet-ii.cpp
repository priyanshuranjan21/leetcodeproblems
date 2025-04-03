class Solution {
public:
//bestapproch
    long long maximumTripletValue(vector<int>& nums)
    {
        int n = nums.size();
        long long   maxresult=0,result;
        vector<int>rmax(n);

        if (n < 3) return 0;
        //12,6,1,2,7
        int max1=nums[n-1];
        for(int i=n-2;i>=1;--i)
        {
            rmax[i]=max1;
            max1=max(max1,nums[i]);
        }
        int max2=nums[0];
        for(int i=1;i<n-1;i++)
        {
            max2=max(max2,nums[i]);
            result = (1LL * (max2 - nums[i])) * rmax[i];
            maxresult=max(maxresult,result);
        }

    return maxresult;
        
    }
};