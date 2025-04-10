class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs)
    {
        int n=strs.size();
        vector<vector<string>>sanket;
        unordered_map<string,vector<string>>mpp;
        for(int i=0;i<n;i++)
        {
            string st=strs[i];
            sort(st.begin(),st.end());
            mpp[st].push_back(strs[i]);
        }  
        for(auto it:mpp)
        {
            sanket.push_back(it.second);
        }
        return sanket;
          
    }
};