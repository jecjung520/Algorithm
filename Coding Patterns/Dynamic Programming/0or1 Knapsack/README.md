# 0/1 Knapsack

## Problem
Given two integer arrays of weights and profits, find subset of maximum profit below the capacity weight.

## Solution 1 - Recursive Brute Force
Try all combinations of item that does not exceed capacity. Decrease the capacity recursively. <br />
[Binary Search](https://github.com/jecjung520/Algorithm/blob/main/Two%20Pointers/Pair%20with%20Target%20Sum%20-%20Easy/targetSum1.cc)

**Time Complexity**: O(2^n) <br />
**Space Complexity**: O(n)

## Solution 2 - Top Down DP with Memoization
When trying all combinations in solution 1, some sub-problems are repeated. Save the answers in dp and reuse subproblem when ocurred. <br />
[Hash Table](https://github.com/jecjung520/Algorithm/blob/main/Two%20Pointers/Pair%20with%20Target%20Sum%20-%20Easy/targetSum2.cc)

**Time Complexity**: O(N*C) - N: number of items, C: capacity <br />
**Space Complexity**: O(N*C)

## Solution 3 - Bottom Up DP
Populate dp bottom up (dp[i][c] is maximum knapsack sum). Take maximum of dp[i-1][c] and profit[i] + dp[i-1][c-weight[]]. <br />
[Hash Table](https://github.com/jecjung520/Algorithm/blob/main/Two%20Pointers/Pair%20with%20Target%20Sum%20-%20Easy/targetSum2.cc)

**Time Complexity**: O(N*C) - N: number of items, C: capacity <br />
**Space Complexity**: O(N*C)
