# Problem 4. Words Concatenation - Hard

## Problem
Given a string and list of words, find all starting indices of concatenation of all given words.

## Solution - Sliding Window with Unordered Map
Similar to **Permutation in a String**. Store pattern in map and find every permutation of pattern in string. Keep count of every matchin character. When all characters are matched, shrink window and keep smallest string with all matching substring. <br />
[Fast and Slow Pointers - Length](https://github.com/jecjung520/Algorithm/blob/main/Coding%20Patterns/Fast%20and%20Slow%20Pointers/1.%20LinkedList%20Cycles-%20Easy/cycleLength.cc)

**Time Complexity**: O(N+M) <br />
**Space Complexity**: O(N)