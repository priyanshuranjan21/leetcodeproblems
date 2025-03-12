class Solution {
public:
    int maximumCount(vector<int>& nums) {
     int len=nums.size();
     int count1=0;
      int count2=0;
     for(int i=0;i<len ;i++)
     {
        if(nums[i]>0)
        {
            count1++;
        }
        if(nums[i]<0)
        count2++;
     }   
     int maximum=max(count1,count2);
     return maximum;
    }
};