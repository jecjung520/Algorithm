# Problem 3. Cycle in a Matrix - Medium

## Problem
Given a matrix of different characters, find cycle of same characters. Cycle is when four or more characters form a cycle.

## Solution - Depth First Search (DFS)
Similar to **Number of Islands** problem. Use visited matrix to keep track of visited cells. When we reach a visited cell, it means cycle is found. <br />
[DFS](https://github.com/jecjung520/Algorithm/blob/main/Coding%20Patterns/Islands%20-%20Matrix%20Traversal/Problem%203.%20Cycle%20in%20a%20Matrix%20-%20Medium/matrixCycle.cc)

**Time Complexity**: O(M*N) <br />
**Space Complexity**: O(M*N)
