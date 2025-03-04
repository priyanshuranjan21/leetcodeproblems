class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) 
    {
        int count=0;
      int row = mat.size();
      int col = mat[0].size();  
      vector<int>m1(row);
      vector<int>m2(col);
      for(int i=0;i<row;i++)
      {
        m1[i]=0;
      }
      for(int i=0;i<col;i++)
      {
        m2[i];
      }
    //how we will check wether that row and col contaion only one 1 when the condition mat[i][j]==1 && m1[i]==1&& m2[j]==1 then only that row nd col contaion only one 1
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(mat[i][j]==1)
            {
                m1[i]++;
                m2[j]++;
            }
        }
    }

        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(mat[i][j]==1 && m1[i]==1 && m2[j]==1)
                {
                     count++;
                }
            }
        }
    return count;
    }
};