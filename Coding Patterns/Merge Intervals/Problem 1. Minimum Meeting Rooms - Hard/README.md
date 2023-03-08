# Problem 1. Minimum Meeting Rooms - Hard

## Problem
Given a list of intervals representing start and end time of 'N' meetings, find the minimum number of rooms required to hold all the meetings.

## Solution - Merge Intervals
1. Sort meetings based on start time.
2. Create min-heap to store all active meetings.
3. Iterate through all meetings and add them to the min-heap.
4. Before scheduling m1, remove all meetings ending before m1.
5. Add m1 to the heap.
6. The heap contains all overlapping meetings.
<br>

[DFS](https://github.com/jecjung520/Algorithm/blob/main/Coding%20Patterns/Islands%20-%20Matrix%20Traversal/Problem%202.%20Number%20of%20Distinct%20Islands%20-%20Medium/numberofIsland.cc)

**Time Complexity**: O(NlogN) <br />
**Space Complexity**: O(N)
