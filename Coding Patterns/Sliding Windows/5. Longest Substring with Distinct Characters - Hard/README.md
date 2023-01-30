# Longest Substring with Distinct Characters - Hard

## Problem
Given a string, find length of longest substring with all distinct characters.

## Solution - Sliding Window with Unordered Set
Add chars of strings to window (unordered_set) until the size is greater than 1. When size of window is greater than 1, compare maxLength with current window size. Then remove char at windowStart index from window. <br />
[Fast and Slow Pointers - Length](https://github.com/jecjung520/Algorithm/blob/main/Coding%20Patterns/Fast%20and%20Slow%20Pointers/1.%20LinkedList%20Cycles-%20Easy/cycleLength.cc)

**Time Complexity**: O(N) <br />
**Space Complexity**: O(N) - at worst, the window will contain N characters