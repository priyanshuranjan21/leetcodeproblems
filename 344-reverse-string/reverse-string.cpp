class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        int i=0,last=n-1;
        while(i<last)
        {
            swap(s[i],s[last]);
            i++;
            last--;
        }
        return ;
    }
};