
#define ll long long
#define MOD 1000000007

ll dp[1005][51];

ll fun(int t, int i, int** types) {
    if (t == 0) return 1;
    if (t < 0 || i < 0) return 0;
    if (dp[t][i] != -1) return dp[t][i];
    
    ll ans = 0;
    for (int j = 0; j <= types[i][0]; j++) {
        ans += fun(t - j * types[i][1], i - 1, types);
        ans %= MOD;
    }
    dp[t][i] = ans;
    return ans;
}

int waysToReachTarget(int target, int** types, int typesSize, int* typesColSize) {
    memset(dp, -1, sizeof(dp));
    return fun(target, typesSize - 1, types);
}