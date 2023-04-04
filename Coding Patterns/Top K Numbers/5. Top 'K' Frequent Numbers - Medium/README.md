# Top 'K' Frequent Numbers - Medium

## Problem
Given an unsorted array, find top 'K' frequently occuring numbers.

## Solution 1 - Min Heap with HashMap
Follows **Top K Numbers**. Have frequency map in HashMap and use **Min Heap** to find 'K' most frequently occured number. Compare frequencies in **Min Heap** to find the frequently occuring numbers. <br>
[Binary Search](https://github.com/jecjung520/Algorithm/blob/main/Two%20Pointers/Pair%20with%20Target%20Sum%20-%20Easy/targetSum1.cc)

**Time Complexity**: O(NlogK) <br>
**Space Complexity**: O(K)