# Insert Intervals - Medium

## Problem
Given a list of non-interleaving intervals, insert a given interval at the correct position.

## Solution - Insert Intervals
First skip all incorrect index. Iterate such that ```intervals[i][1] < netIntervals[0]```. Once the correct position is found, implement merge interval similar to **Merge Intervals**. <br>
[DFS](https://github.com/jecjung520/Algorithm/blob/main/Coding%20Patterns/Islands%20-%20Matrix%20Traversal/Problem%202.%20Number%20of%20Distinct%20Islands%20-%20Medium/numberofIsland.cc)

**Time Complexity**: O(N) <br />
**Space Complexity**: O(N)
