class Solution {
public:
    int compress(vector<char>& chars) {
        //hellow guys heppy learning
        int n=chars.size();
        int i=0;
        int count=0;
        int answerindex=0;
        while(i<n)
        {
            int j=i+1;
            while(j<n && chars[i]==chars[j])
            {
                j++;
            }
            //this while loop se bahar aaa gya means either sara same character count ker liya ya phir koi character same nhi milla 
           chars[answerindex++]=chars[i];
           count=j-i;
           if(count>1)
           {
            string cnt=to_string(count);
            for(auto ch:cnt)
            {
                chars[answerindex++]=ch;
            }
           }
           i=j;

        }
        return answerindex;
        
    }
};