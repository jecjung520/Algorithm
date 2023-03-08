# Problem 2. Maximum CPU Load - Hard

## Problem
Given a list of jobs with start time, end time, and CPU load when its running. Find maximum CPU load if all jobs are running on the same machine.

## Solution - Merge Intervals
Similar to **Minimum Meeting Rooms**. Keep a running count of maximum CPU at any time. <br>

[DFS](https://github.com/jecjung520/Algorithm/blob/main/Coding%20Patterns/Islands%20-%20Matrix%20Traversal/Problem%202.%20Number%20of%20Distinct%20Islands%20-%20Medium/numberofIsland.cc)

**Time Complexity**: O(NlogN) <br />
**Space Complexity**: O(N)
