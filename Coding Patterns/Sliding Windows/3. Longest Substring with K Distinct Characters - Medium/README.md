# Longest Substring with K Distinct Characters - Medium

## Problem
Given a string, find length of longest substring with no more than k distinct characters.

## Solution - Sliding Window with Unordered Set
Add chars of strings to unordered_set until the size of set is greater than k. Compare the length (i-windowStart) with maxLength, keep bigger length. <br />
[Fast and Slow Pointers - Length](https://github.com/jecjung520/Algorithm/blob/main/Coding%20Patterns/Fast%20and%20Slow%20Pointers/1.%20LinkedList%20Cycles-%20Easy/cycleLength.cc)

**Time Complexity**: O(N) <br />
**Space Complexity**: O(N) - storing maximum of N+1 characters in unordered set