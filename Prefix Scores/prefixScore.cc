vector<int> solve(int n, vector<int> A){
    vector<int> ans(n);
    int mx = 0, M = int(1e9) + 7, sum = 0, ssum = 0;
    for (int i = 0; i < n; ++i){
        sum += A[i];
        sum %= M;
        ssum += sum;
        ssum %= M;
        mx = max(mx, A[i]);
        ans[i] = ssum + 1LL * mx * (i + 1) % M;
        ans[i] %= M;
    }
    return ans;
}