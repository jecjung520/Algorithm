# Problem 1. Count of Subset Sum - Hard

## Problem
Given a set of positive numbers, find total number of subsets whose sum is equal to given number S.

## Solution 1 - Basic Solution
Similar implementation to **Subset Sum**. Try all subsets of given numbers to count subsets with sum equal to S. <br />
[Binary Search](https://github.com/jecjung520/Algorithm/blob/main/Two%20Pointers/Pair%20with%20Target%20Sum%20-%20Easy/targetSum1.cc)

**Time Complexity**: O(2^n) <br />
**Space Complexity**: O(n)

## Solution 2 - Top Down Memoization
Use 2d array to store overlapping sub-problems. <br />
[Hash Table](https://github.com/jecjung520/Algorithm/blob/main/Two%20Pointers/Pair%20with%20Target%20Sum%20-%20Easy/targetSum2.cc)

**Time Complexity**: O(N*S) - N: number of items, S: desired sum <br />
**Space Complexity**: O(N*S)

## Solution 3 - Bottom Up DP
First, exclude the number. Count all subsets without given number up to the given sum. Then, include the number if its value is not more than S. <br />
[Hash Table](https://github.com/jecjung520/Algorithm/blob/main/Two%20Pointers/Pair%20with%20Target%20Sum%20-%20Easy/targetSum2.cc)

**Time Complexity**: O(N*S) - N: number of items, S: desired sum <br />
**Space Complexity**: O(N*S)
