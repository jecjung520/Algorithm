# Problem 2. Rearrange a LinkedList - Medium

## Problem
Given head of a Singly LinkedList, rearrange such that nodes from second half of LinkedList are inserted alternately.

## Solution - Fast and Slow Pointers
Similar to **Palindrome LinkedList**. Find middle node of the LinkedList. Reverse the second half and iterate first half and reversed second half to produce LinkedList. <br />
[Binary Search](https://github.com/jecjung520/Algorithm/blob/main/Two%20Pointers/Pair%20with%20Target%20Sum%20-%20Easy/targetSum1.cc)

**Time Complexity**: O(N) <br />
**Space Complexity**: O(1)