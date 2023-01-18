# Number of Islands - Easy

## Problem
Given a matrix with 0s and 1s, count number of islands on it. An island is group of 1s surrounded by edge or 0s.

## Solution 1 - Depth First Search (DFS)
Mark each cells visited with DFS. Recursively visit all neighbouring cells. <br />
[Binary Search](https://github.com/jecjung520/Algorithm/blob/main/Two%20Pointers/Pair%20with%20Target%20Sum%20-%20Easy/targetSum1.cc)

**Time Complexity**: O(M*N) <br />
**Space Complexity**: O(M*N)

## Solution 2 - Breadth First Search (BFS)
Mark each cells visited with BFS. Recursively visit all neighbouring cells. <br />
[Hash Table](https://github.com/jecjung520/Algorithm/blob/main/Two%20Pointers/Pair%20with%20Target%20Sum%20-%20Easy/targetSum2.cc)

**Time Complexity**: O(M*N) <br />
**Space Complexity**: O(min(M*N))

## Solution 3 - BFS with Visited Matrix
Keep a seperate boolean matrix to record visited cells.

**Time Complexity**: O(M*N) <br />
**Space Complexity**: O(M*N)