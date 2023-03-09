# Factor Combinations - Medium

## Problem
Given an integer N, return all possible combinations of its factors.

## Solution - Backtracking
Iterate from start to square root of n+1. If current integer i divies n, add i to list of current factors and append this list.
<br />
[Binary Search](https://github.com/jecjung520/Algorithm/blob/main/Two%20Pointers/Pair%20with%20Target%20Sum%20-%20Easy/targetSum1.cc)

**Time Complexity**: O(nsqrt(n)) <br />
**Space Complexity**: O(logn)