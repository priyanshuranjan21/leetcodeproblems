class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        /*done through bit manipulation nice concept:for first bit position count for all number whose bit is high to make number greater thahn 0.do it for all bit position for al number who has maximum count that will be the answer .for nice explation see video of this questuion from codewithmike
        vector<int>count(24);*/
        int result=0;
        for(int i=0;i<24;i++)
        {
        int count=0;
            for(int &nums:candidates){
                if((nums & (1 << i)) !=0)
                {
                    count+=1;
                }
                 
            }
            result=max(result,count);
        }
        return result;
        
    }
};
