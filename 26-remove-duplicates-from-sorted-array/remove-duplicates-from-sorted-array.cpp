/*class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int count =0;
        if(n==1)
        {
            return 1;
        }
        for( int i=0;i<n;i++)
        {
            if(nums[i]==nums[i+1]&& i<n-1)
            {
                continue;
            }
            else
            {
                nums[count]=nums[i];
                count++;
            }
        }
        return count;*/
        class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i - 1]){
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};