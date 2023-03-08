# Merge Intervals - Medium

## Problem
Given a list of intervals, merge all the overlapping intervals.

## Solution - Merge Intervals
First sort the intervals on the start time. If a overlaps b, merge them into c such that: <br> 
```
c.start = a.start
c.end = max(a.end, b.end)
```
[DFS](https://github.com/jecjung520/Algorithm/blob/main/Coding%20Patterns/Islands%20-%20Matrix%20Traversal/Problem%202.%20Number%20of%20Distinct%20Islands%20-%20Medium/numberofIsland.cc)

**Time Complexity**: O(NlogN) <br />
**Space Complexity**: O(N)
