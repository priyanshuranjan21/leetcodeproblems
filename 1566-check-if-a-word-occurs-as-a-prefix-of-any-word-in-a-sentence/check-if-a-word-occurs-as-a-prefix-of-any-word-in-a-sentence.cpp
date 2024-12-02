class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int index=1;
        for(int i=0;i<sentence.size();i++)
        {
            if(sentence[i]==' ')
            index++;
            if(i==0  || (sentence[i-1]==' '))
            {
                int j=0;
                while(sentence[i]==searchWord[j])
                {
                    i++;
                    j++;
                    if(j== searchWord.size())
                    {
                        return index;
                    }
                    if(i== sentence.size())
                    return -1;
                    if(sentence[i] == ' ')
                    index++;
                }
            }
        }

        return -1;
    }
};