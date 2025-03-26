class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int remender=grid[0][0]%x;
        vector<int>arr;
        //itterating over the 2d arrqay
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]%x!=remender)
                {//impossible to make unique array 
                    return -1;
                }
                else
                {
                    arr.push_back(grid[i][j]);
                }
            }
        }
        //sort thr 1d array which we got
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int medin =n/2;
        int step=0;
        //for counting the step 
        for(int i=0;i<n;i++)
        {
            step+=abs(arr[medin]-arr[i])/x;
        }
        return step;

    }
};