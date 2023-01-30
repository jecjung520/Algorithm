# Longest Substring with Same Letters after Replacement - Hard

## Problem
Given a string of lowercase and at most 'K' replaces, find length of longest same letter substring.

## Solution - Sliding Window with Unordered Map
Iterate through string and add letters to window. Keep track of maximum repeating letter in any window. If remaining letters are less than K, we can replace them all. However, if there are more than K remaining letters, shring window. <br />
[Fast and Slow Pointers - Length](https://github.com/jecjung520/Algorithm/blob/main/Coding%20Patterns/Fast%20and%20Slow%20Pointers/1.%20LinkedList%20Cycles-%20Easy/cycleLength.cc)

**Time Complexity**: O(N) <br />
**Space Complexity**: O(N) - at worst, the window will contain N characters