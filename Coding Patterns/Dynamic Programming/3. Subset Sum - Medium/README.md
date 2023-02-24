# 3. Subset Sum - Medium

## Problem
Given a set of positive numbers, find if a subset with sum equal to S exists.

## Solution 1 - Basic Solution
Identical solution to **basicSubset.cc**. Try all subsets with recursion. <br />
[Binary Search](https://github.com/jecjung520/Algorithm/blob/main/Two%20Pointers/Pair%20with%20Target%20Sum%20-%20Easy/targetSum1.cc)

**Time Complexity**: O(2^n) <br />
**Space Complexity**: O(n)

## Solution 2 - Bottom Up DP
For every possible sum 'S', either exclude number or include number if the value is not more than 'S'. If either of the condition is true, the desired subset can be found. <br />
[Hash Table](https://github.com/jecjung520/Algorithm/blob/main/Two%20Pointers/Pair%20with%20Target%20Sum%20-%20Easy/targetSum2.cc)

**Time Complexity**: O(N*S) - N: number of items, C: desired sum <br />
**Space Complexity**: O(N*S)

## Solution 3 - Optimized Bottom Up
Optimized space complexity. <br />
[Hash Table](https://github.com/jecjung520/Algorithm/blob/main/Two%20Pointers/Pair%20with%20Target%20Sum%20-%20Easy/targetSum2.cc)

**Time Complexity**: O(N*S) - N: number of items, S: total sum <br />
**Space Complexity**: O(S)

