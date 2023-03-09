# Combination Sum - Medium

## Problem
Given a list of distinct integers, return list of all unique combinations of candidates where sum is equal to target.

## Solution - Backtracking
When progressing recursively, subtract current element from the target.
<br />
[Binary Search](https://github.com/jecjung520/Algorithm/blob/main/Two%20Pointers/Pair%20with%20Target%20Sum%20-%20Easy/targetSum1.cc)

**Time Complexity**: O(N^(T/M+1)) T = target, M = min element <br />
**Space Complexity**: O(T/M)