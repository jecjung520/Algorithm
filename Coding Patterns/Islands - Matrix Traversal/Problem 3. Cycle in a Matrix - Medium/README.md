# Problem 3. Cycle in a Matrix - Medium

## Problem
Given a matrix of different characters, find cycle of same characters. Cycle is when four or more characters form a cycle.

## Solution - Depth First Search (DFS)
Similar to **Number of Islands** problem. Use visited matrix to keep track of visited cells. When we reach a visited cell, it means cycle is found. <br />
[Binary Search](https://github.com/jecjung520/Algorithm/blob/main/Two%20Pointers/Pair%20with%20Target%20Sum%20-%20Easy/targetSum1.cc)

**Time Complexity**: O(M*N) <br />
**Space Complexity**: O(M*N)