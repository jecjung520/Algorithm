# Problem 2. Rearrange a LinkedList - Medium

## Problem
Given head of a Singly LinkedList, rearrange such that nodes from second half of LinkedList are inserted alternately.

## Solution - Fast and Slow Pointers
Similar to **Palindrome LinkedList**. Find middle node of the LinkedList. Reverse the second half and iterate first half and reversed second half to produce LinkedList. <br />
[Fast and Slow Pointers](https://github.com/jecjung520/Algorithm/blob/main/Coding%20Patterns/Fast%20and%20Slow%20Pointers/Problem%202.%20Rearrange%20a%20LinkedList%20-%20Medium/rearrangeList.cc)

**Time Complexity**: O(N) <br />
**Space Complexity**: O(1)