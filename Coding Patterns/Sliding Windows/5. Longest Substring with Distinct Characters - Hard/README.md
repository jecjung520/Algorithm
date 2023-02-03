# Longest Substring with Distinct Characters - Hard

## Problem
Given a string, find length of longest substring with all distinct characters.

## Solution - Sliding Window with Unordered Set
Add chars of strings to window (unordered_set) until the size is greater than 1. When size of window is greater than 1, compare maxLength with current window size. Then remove char at windowStart index from window. <br />
[Sliding Window with Unordered Set](https://github.com/jecjung520/Coding-Test-Algorithms/blob/main/Coding%20Patterns/Sliding%20Windows/5.%20Longest%20Substring%20with%20Distinct%20Characters%20-%20Hard/distinctChar.cc)

**Time Complexity**: O(N) <br />
**Space Complexity**: O(N) - at worst, the window will contain N characters