# Connect Ropes - Easy

## Problem
Given N ropes with different length, connect them into one big rope with minimum length. Cost of connecting two ropes is equal to sum of their lengths.

## Solution 1 - Min Heap
Similar approach to **Kth Smallest Number**. Implement a **Min Heap** to find smallest ropes and insert rope back to the heap. <br>
[Binary Search](https://github.com/jecjung520/Algorithm/blob/main/Two%20Pointers/Pair%20with%20Target%20Sum%20-%20Easy/targetSum1.cc)

**Time Complexity**: O(NlogK) <br>
**Space Complexity**: O(K)