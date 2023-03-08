# Problem 3. Employee Free Time - Hard

## Problem
For 'K' employees, determine free intervals common to all employees.

## Solution - Merge Intervals
Insert first interval in a min heap. The heap keeps the smallest start time. Compare the next smallest start-time interval to find the gap. <br>

[DFS](https://github.com/jecjung520/Algorithm/blob/main/Coding%20Patterns/Islands%20-%20Matrix%20Traversal/Problem%202.%20Number%20of%20Distinct%20Islands%20-%20Medium/numberofIsland.cc)

**Time Complexity**: O(NlogN) <br />
**Space Complexity**: O(N)
