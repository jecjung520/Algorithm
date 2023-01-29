# Number of Islands - Easy

## Problem
Given a matrix with 0s and 1s, count number of islands on it. An island is group of 1s surrounded by edge or 0s.

## Solution 1 - Depth First Search (DFS)
Mark each cells visited with DFS. Recursively visit all neighbouring cells. <br />
[DFS](https://github.com/jecjung520/Algorithm/blob/main/Coding%20Patterns/Islands%20-%20Matrix%20Traversal/1.%20Number%20of%20Islands%20-%20Easy/numIslandDFS.cc)

**Time Complexity**: O(M*N) <br />
**Space Complexity**: O(M*N)

## Solution 2 - Breadth First Search (BFS)
Mark each cells visited with BFS. Recursively visit all neighbouring cells. <br />
[BFS](https://github.com/jecjung520/Algorithm/blob/main/Coding%20Patterns/Islands%20-%20Matrix%20Traversal/1.%20Number%20of%20Islands%20-%20Easy/numIslandBFS.cc)

**Time Complexity**: O(M*N) <br />
**Space Complexity**: O(min(M*N))

## Solution 3 - BFS with Visited Matrix
Keep a seperate boolean matrix to record visited cells. <br />
[BFS with VM](https://github.com/jecjung520/Algorithm/blob/main/Coding%20Patterns/Islands%20-%20Matrix%20Traversal/1.%20Number%20of%20Islands%20-%20Easy/numIslandBFSvm.cc)

**Time Complexity**: O(M*N) <br />
**Space Complexity**: O(M*N)
