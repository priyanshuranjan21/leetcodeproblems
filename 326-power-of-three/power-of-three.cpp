class Solution {
public:
    bool isPowerOfThree(int n)
    {
        //for finding power of 3 we can use log value 
        if(n<=0)
        {
            return false;
        }  
        double logpower=log10(n)/log10(3);
        return floor(logpower)==ceil(logpower);  
    }
};