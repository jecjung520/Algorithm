# Biggest Island - Easy

## Problem
Given a matrix with 0s and 1s, find the biggest island.

## Solution - Depth First Search (DFS)
When cell == 1, island is found. Using that cell as a root, find all nearby 1s with DFS. Recursively add up 1s to find the area of island. <br />
[DFS](https://github.com/jecjung520/Algorithm/blob/main/Coding%20Patterns/Islands%20-%20Matrix%20Traversal/2.%20Biggest%20Island%20-%20Easy/biggestIsland.cc)

**Time Complexity**: O(M*N) <br />
**Space Complexity**: O(M*N)
