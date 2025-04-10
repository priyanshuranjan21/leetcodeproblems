class Solution {
public:
    bool isValid(string s)
    {
        unordered_map<char,char>sanket{{'}','{'},{')','('},{']','['}};
        stack<char>st;
        for(auto ch:s)
        {
            if(ch=='{'||ch=='('||ch=='[')
            {
                st.push(ch);
            }
            else if(ch=='}'||ch==')'||ch==']')
            {
                if(st.empty()||st.top()!=sanket[ch])
                {
                    return false;
                }
                st.pop();
            }
        } 
        return st.empty();   
    }
};