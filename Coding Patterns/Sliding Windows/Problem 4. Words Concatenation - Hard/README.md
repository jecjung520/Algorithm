# Problem 4. Words Concatenation - Hard

## Problem
Given a string and list of words, find all starting indices of concatenation of all given words.

## Solution - Sliding Window with Unordered Map
Similar to **Permutation in a String**. Store pattern in map and find every permutation of pattern in string. Keep count of every matchin character. When all characters are matched, shrink window and keep smallest string with all matching substring. <br />
[Sliding Window with Unordered Map](https://github.com/jecjung520/Coding-Test-Algorithms/blob/main/Coding%20Patterns/Sliding%20Windows/Problem%204.%20Words%20Concatenation%20-%20Hard/wordsConcatenate.cc)

**Time Complexity**: O(N+M) <br />
**Space Complexity**: O(N)