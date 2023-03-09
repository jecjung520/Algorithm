# 2. Word Search - Medium

## Problem
Given an m x n grid of characters and a string word, return true if word exists in grid.

## Solution - Backtracking
Start at first character of the word. Check all 8 adjacent cells in the grid. If match is found, mark cell as visited and recursively check the next word.
<br />
[Binary Search](https://github.com/jecjung520/Algorithm/blob/main/Two%20Pointers/Pair%20with%20Target%20Sum%20-%20Easy/targetSum1.cc)

**Time Complexity**: O(4^n) <br />
**Space Complexity**: O(n)