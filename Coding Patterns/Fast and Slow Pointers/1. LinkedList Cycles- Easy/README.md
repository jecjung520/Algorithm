# LinkedList Cycles- Easy

## Problem
Given head of a Singly LinkedList, determine if the LinkedList has a cycle or not.

## Solution - Fast and Slow Pointers
Slow pointer moves one step and fast pointer moves two steps whilst traversing the LinkedList. If LinkedList has no cycle, fast pointer will reach end before slow pointer. <br />
[Fast and Slow Pointers](https://github.com/jecjung520/Algorithm/blob/main/Coding%20Patterns/Fast%20and%20Slow%20Pointers/1.%20LinkedList%20Cycles-%20Easy/cycleLinkedList.cc)

**Time Complexity**: O(N) <br />
**Space Complexity**: O(1)

## Similar Problem - Length of Cycle
Given head of a LinkedList with cycle, find the length of cycle.

## Solution - Fast and Slow Pointers
Similar to previous solution. <br />
[Fast and Slow Pointers - Length](https://github.com/jecjung520/Algorithm/blob/main/Coding%20Patterns/Fast%20and%20Slow%20Pointers/1.%20LinkedList%20Cycles-%20Easy/cycleLength.cc)

**Time Complexity**: O(N) <br />
**Space Complexity**: O(1)