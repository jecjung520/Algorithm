# Start of LinkedList Cycle - Medium

## Problem
Given head of a Singly LinkedList, find starting node of cycle.

## Solution - Fast and Slow Pointers
Once cycle is detected, increment slow pointer with entry pointer together. When they are equal, the entry pointer is the starting node of cycle. <br />
[Binary Search](https://github.com/jecjung520/Algorithm/blob/main/Two%20Pointers/Pair%20with%20Target%20Sum%20-%20Easy/targetSum1.cc)

**Time Complexity**: O(N) <br />
**Space Complexity**: O(1)