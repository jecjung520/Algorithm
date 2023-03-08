# Intervals Intersection - Medium

## Problem
Given two lists of intervals, find intersection of the two lists. 

## Solution - Intervals Intersection
With the 5 overlapping conditions, find if two intervals overlap. Then find overlapped part as such.
```
start = max(a.start, b.start)
end = min(a.end, b.end)
```
[DFS](https://github.com/jecjung520/Algorithm/blob/main/Coding%20Patterns/Islands%20-%20Matrix%20Traversal/Problem%202.%20Number%20of%20Distinct%20Islands%20-%20Medium/numberofIsland.cc)

**Time Complexity**: O(N+M) <br />
**Space Complexity**: O(1)
