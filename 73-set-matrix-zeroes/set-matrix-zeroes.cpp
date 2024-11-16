class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>>p;
        int t=0;
        int row=matrix.size();
        int col=matrix[0].size();
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(matrix[i][j]==0)
                {
                    p.push_back({i,j});
                    t++;
                }
            }
        }
        int a=0;
        for(auto t:p)
        {
        for(int i=0;i<col;i++)
        {
            matrix[p[a].first][i]=0;
        }
        for(int j=0;j<row;j++)
        {
            matrix[j][p[a].second]=0;
        }
        a++;
        }
        
    return;
        
    }
};