# Longest Substring with K Distinct Characters - Medium

## Problem
Given a string, find length of longest substring with no more than k distinct characters.

## Solution - Sliding Window with Unordered Set
Add chars of strings to unordered_set until the size of set is greater than k. Compare the length (i-windowStart) with maxLength, keep bigger length. <br />
[Sliding Window with Unordered Set](https://github.com/jecjung520/Coding-Test-Algorithms/blob/main/Coding%20Patterns/Sliding%20Windows/3.%20Longest%20Substring%20with%20K%20Distinct%20Characters%20-%20Medium/longestChar.cc)

**Time Complexity**: O(N) <br />
**Space Complexity**: O(N) - storing maximum of N+1 characters in unordered set