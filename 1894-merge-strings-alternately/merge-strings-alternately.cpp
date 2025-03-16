class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int l1=word1.size();
        int l2=word2.size();
        int i=0,j=0;
        string result="";
        while(i==j && i<l1 && j<l2)
        {
            result+=word1[i];
            result+=word2[j];
            i++;
            j++;
        }
        while(i>=l1 && j<l2)
        {
            result+=word2[j];
            j++;
        }
        while(j>=l2 && i<l1)
        {
            result+=word1[i];
            i++;
        }
        return result;

    }

};