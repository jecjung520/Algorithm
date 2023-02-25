# Minimum Subset Sum Difference - Hard

## Problem
Given a set of positive numbers, partition into two subsets with minimum sum difference.

## Solution 1 - Basic Solution
Similar implementation to **Brute Knapsack**. Compute two subset sums with sum1 and sum2. Return the min of them. <br />
[Binary Search](https://github.com/jecjung520/Algorithm/blob/main/Two%20Pointers/Pair%20with%20Target%20Sum%20-%20Easy/targetSum1.cc)

**Time Complexity**: O(2^n) <br />
**Space Complexity**: O(n)

## Solution 2 - Top Down Memoization
Use 2d array to store overlapping sub-problems. <br />
[Hash Table](https://github.com/jecjung520/Algorithm/blob/main/Two%20Pointers/Pair%20with%20Target%20Sum%20-%20Easy/targetSum2.cc)

**Time Complexity**: O(N*S) - N: number of items, C: desired sum <br />
**Space Complexity**: O(N*S)

## Solution 3 - Bottom Up DP
For every possible sum 'S', either exclude number or include number if the value is not more than 'S'. If either of the condition is true, the desired subset can be found. <br />
[Hash Table](https://github.com/jecjung520/Algorithm/blob/main/Two%20Pointers/Pair%20with%20Target%20Sum%20-%20Easy/targetSum2.cc)

**Time Complexity**: O(N*S) - N: number of items, C: desired sum <br />
**Space Complexity**: O(N*S)

## Solution 3 - Optimized Bottom Up
Optimized space complexity. <br />
[Hash Table](https://github.com/jecjung520/Algorithm/blob/main/Two%20Pointers/Pair%20with%20Target%20Sum%20-%20Easy/targetSum2.cc)

**Time Complexity**: O(N*S) - N: number of items, S: total sum <br />
**Space Complexity**: O(S)

