class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int maxLength = 1, incLength = 1, decLength = 1;
for(int i = 1; i < nums.size(); i++) {
if(nums[i] > nums[i - 1]) {
incLength++;
decLength = 1;
} else if (nums[i] < nums[i - 1]) {
decLength++;
incLength = 1;
} else {
incLength = 1;
decLength = 1;
}
maxLength = max({maxLength, incLength, decLength});
}
return maxLength;
        
    }
};