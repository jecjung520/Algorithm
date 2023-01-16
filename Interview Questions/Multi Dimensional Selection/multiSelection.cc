long long getMaxProduct(vector<vector<int>> arr) {
    int m = int(arr.size()), n = int(arr[0].size()), req = (n + 1) / 2;
    vector<int> A;
    unordered_map<int, vector<int>> mp;
    for (int i = 0; i < m; ++i){
        sort(begin(arr[i]), end(arr[i]));
        for (int j = 0; j < n; ++j){
            A.push_back(arr[i][j]);
            if (mp[arr[i][j]].empty() || mp[arr[i][j]].back() != i){
                mp[arr[i][j]].push_back(i);
            }
        }
    }
    sort(begin(A), end(A));
    A.resize(unique(begin(A), end(A)) - begin(A));
    vector<int> L(m), R(m);
    int cnt = 0, k = 1e9, num = 0;
    unordered_set<int> s;
    for (int i = 0, l = 0; i < int(A.size()); ++i){
        for (int j : mp[A[i]]){
            while(R[j] < n && arr[j][R[j]] == A[i]){
                ++R[j];
                ++cnt;
            }
            if (R[j] - L[j] >= req){
                s.insert(j);
            }
        }
        while(int(s.size()) == m){
            if (A[i] - A[l] < k){
                k = A[i] - A[l];
                num = cnt;
            }else if (A[i] - A[l] == k){
                num = max(num, cnt);
            }
            for (int j : mp[A[l]]){
                while(L[j] < R[j] && arr[j][L[j]] == A[l]){
                    ++L[j];
                    --cnt;
                }
                if (R[j] - L[j] < req){
                    s.erase(j);
                }
            }
            ++l;
        }
    }
    return 1LL * k * num;
}