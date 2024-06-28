class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {

        vector<int> degree(n, 0);//for giving degree

        for(auto &vec : roads) {
            int u = vec[0];
            int v = vec[1];

            degree[u]++;
            degree[v]++;
        }

        sort(begin(degree), end(degree)); 

        long long value = 1;
        long long sum   = 0;

        for(int i = 0; i < n; i++) {
            sum += (degree[i] * value);
            value++;
        }
//in this we have created an array in which we have inserted all node degree 
//and after sorting we will provide maximum value to that node which has maximum degree
        return sum;
    }
};
