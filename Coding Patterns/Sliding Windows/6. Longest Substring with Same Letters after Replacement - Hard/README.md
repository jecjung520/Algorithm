# Longest Substring with Same Letters after Replacement - Hard

## Problem
Given a string of lowercase and at most 'K' replaces, find length of longest same letter substring.

## Solution - Sliding Window with Unordered Map
Iterate through string and add letters to window. Keep track of maximum repeating letter in any window. If remaining letters are less than K, we can replace them all. However, if there are more than K remaining letters, shring window. <br />
[Sliding Window with Unordered Map](https://github.com/jecjung520/Coding-Test-Algorithms/blob/main/Coding%20Patterns/Sliding%20Windows/6.%20Longest%20Substring%20with%20Same%20Letters%20after%20Replacement%20-%20Hard/longestAfterReplace.cc)

**Time Complexity**: O(N) <br />
**Space Complexity**: O(N) - at worst, the window will contain N characters