# Triplets with Smaller Sum - Medium

## Problem
Given an unsorted array and target sum, count all triplets smaller than target sum. All elements of triplets must be different.

## Solution
Sort array first. When we are at X find pair whose sum is smaller than target sum - X. <br />
[Binary Search](https://github.com/jecjung520/Algorithm/blob/main/Two%20Pointers/Pair%20with%20Target%20Sum%20-%20Easy/targetSum1.cc)

**Time Complexity**: O(N^2) <br />
**Space Complexity**: O(N)