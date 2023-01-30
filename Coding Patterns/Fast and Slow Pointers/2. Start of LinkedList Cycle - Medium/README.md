# Start of LinkedList Cycle - Medium

## Problem
Given head of a Singly LinkedList, find starting node of cycle.

## Solution - Fast and Slow Pointers
Once cycle is detected, increment slow pointer with entry pointer together. When they are equal, the entry pointer is the starting node of cycle. <br />
[Fast and Slow Pointers](https://github.com/jecjung520/Algorithm/blob/main/Coding%20Patterns/Fast%20and%20Slow%20Pointers/2.%20Start%20of%20LinkedList%20Cycle%20-%20Medium/startOfCycle.cc)

**Time Complexity**: O(N) <br />
**Space Complexity**: O(1)