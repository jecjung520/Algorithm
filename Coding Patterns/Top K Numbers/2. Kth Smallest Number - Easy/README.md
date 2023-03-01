# Kth Smallest Number - Easy

## Problem
Given an unsorted array, find 'K' smallest numbers in it.

## Solution 1 - General Solution - Heap
This time, we use a max-heap where root is the biggest element. Compare every number with root. <br>
[Binary Search](https://github.com/jecjung520/Algorithm/blob/main/Two%20Pointers/Pair%20with%20Target%20Sum%20-%20Easy/targetSum1.cc)

**Time Complexity**: O(NlogK) <br>
**Space Complexity**: O(K)