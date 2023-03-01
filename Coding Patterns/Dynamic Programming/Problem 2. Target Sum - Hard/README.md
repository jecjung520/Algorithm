# Problem 2. Target Sum - Hard

## Problem
Given a set of positive numbers, find total ways to assign '+' or '-' sign that each numbers are assigned with to make the sum equal to S.

## Solution 1 - Basic Solution
Combination of implementation of **0/1 Knapsack pattern** with **Count of Subset**. Same implementation with **Optimized Count of Subset**. <br />
[Binary Search](https://github.com/jecjung520/Algorithm/blob/main/Two%20Pointers/Pair%20with%20Target%20Sum%20-%20Easy/targetSum1.cc)

**Time Complexity**: O(N*S) <br />
**Space Complexity**: O(N*S)

## Solution 2 - Space Optimized Solution
Implementation of single array. <br />
[Hash Table](https://github.com/jecjung520/Algorithm/blob/main/Two%20Pointers/Pair%20with%20Target%20Sum%20-%20Easy/targetSum2.cc)

**Time Complexity**: O(N*S) - N: number of items, S: desired sum <br />
**Space Complexity**: O(N)