class Solution {
public:
    bool isPowerOfFour(int n) 
    {
        if(n<=0)
        {
            return 0;
        }    
        double logpower=log10(n)/log10(4);
        return floor(logpower)==ceil(logpower);
    }
};