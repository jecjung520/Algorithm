# Top 'K' Numbers - Easy

## Problem
Given an unsorted array, find 'K' largest numbers in it.

## Solution 1 - General Solution - Heap
First insert 'K' elements in the heap. Then, continuously search for next number and replace with smallest element from the heap. Searching for smallest number in heap takes O(logK) time. So overall time complexity of the program is O(KlogK + (N-K)logK). <br>
[Binary Search](https://github.com/jecjung520/Algorithm/blob/main/Two%20Pointers/Pair%20with%20Target%20Sum%20-%20Easy/targetSum1.cc)

**Time Complexity**: O(NlogK) <br>
**Space Complexity**: O(K)