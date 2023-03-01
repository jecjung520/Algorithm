# K Closest Points to the Origin - Easy

## Problem
Given an array of points in a 2D plane, find K closest points to the origin.

## Solution 1 - General Solution - Heap
Similar approach to **Top K Numbers**. Implement a **Max Heap** to push_back elements that are closer than the top of max heap. <br>
[Binary Search](https://github.com/jecjung520/Algorithm/blob/main/Two%20Pointers/Pair%20with%20Target%20Sum%20-%20Easy/targetSum1.cc)

**Time Complexity**: O(NlogK) <br>
**Space Complexity**: O(K)