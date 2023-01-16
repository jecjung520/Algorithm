# Triplet Sum to Zero - Medium

## Problem
Given an unsorted array, find unique triplets adding up to zero.

## Solution
Sort array first, then iterate one at a time. When we are at number X, find Y + Z = - X. <br />
[Binary Search](https://github.com/jecjung520/Algorithm/blob/main/Two%20Pointers/Pair%20with%20Target%20Sum%20-%20Easy/targetSum1.cc)

**Time Complexity**: O(N^2) <br />
**Space Complexity**: O(N)