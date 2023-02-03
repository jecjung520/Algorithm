# Problem 2. String Anagrams - Hard

## Problem
Given a string and pattern find all anagrams of pattern in string.

## Solution - Sliding Window with Unordered Map
Similar to **Permutation in a String**. Store pattern in map and find every permutation of pattern in string. <br />
[Fast and Slow Pointers - Length](https://github.com/jecjung520/Algorithm/blob/main/Coding%20Patterns/Fast%20and%20Slow%20Pointers/1.%20LinkedList%20Cycles-%20Easy/cycleLength.cc)

**Time Complexity**: O(N+M) <br />
**Space Complexity**: O(N)