# Equal Subset Sum Partition - Medium

## Problem
Given a set of positive numbers, find if it can be paritioned into two subsets of equal sums.

## Solution 1 - Basic Solution
Try all combinations and see if any pair matches the sum. Two equal subsets must have sum equal to S/2. This means if S is odd, partition cannot occur. <br />
[Binary Search](https://github.com/jecjung520/Algorithm/blob/main/Two%20Pointers/Pair%20with%20Target%20Sum%20-%20Easy/targetSum1.cc)

**Time Complexity**: O(2^n) <br />
**Space Complexity**: O(n)

## Solution 2 - Top Down DP with Memoization
Use 2d array to store solved sub-problems. <br />
[Hash Table](https://github.com/jecjung520/Algorithm/blob/main/Two%20Pointers/Pair%20with%20Target%20Sum%20-%20Easy/targetSum2.cc)

**Time Complexity**: O(N*S) - N: number of items, S: total sum <br />
**Space Complexity**: O(N*S)

## Solution 3 - Bottom Up DP
Populate dp bottom up (dp[i][c] is maximum knapsack sum). Take maximum of dp[i-1][c] and profit[i] + dp[i-1][c-weight[]]. <br />
[Hash Table](https://github.com/jecjung520/Algorithm/blob/main/Two%20Pointers/Pair%20with%20Target%20Sum%20-%20Easy/targetSum2.cc)

**Time Complexity**: O(N*C) - N: number of items, C: capacity <br />
**Space Complexity**: O(N*C)

## Solution 4 - Optimized Bottom Up DP
Using i % 2 instead of i - 1. This decreases the time complexity of O(2*C) by using a single array.  <br />
[Hash Table](https://github.com/jecjung520/Algorithm/blob/main/Two%20Pointers/Pair%20with%20Target%20Sum%20-%20Easy/targetSum2.cc)

**Time Complexity**: O(N*C) - N: number of items, C: capacity <br />
**Space Complexity**: O(C)