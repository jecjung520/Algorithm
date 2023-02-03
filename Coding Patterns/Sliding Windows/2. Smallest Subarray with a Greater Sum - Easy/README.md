# Smallest Subarray with a Greater Sum - Easy

## Problem
Given an array of integers, find the length of smallest subarray with sum greater or equal to S.

## Solution - Sliding Window
Add elements until window sum becomes greater or equal to S. From here, compare with minSum and subtract left index until window sum becomes less than S. <br />
[Sliding Window](https://github.com/jecjung520/Coding-Test-Algorithms/blob/main/Coding%20Patterns/Sliding%20Windows/2.%20Smallest%20Subarray%20with%20a%20Greater%20Sum%20-%20Easy/smallestSum.cc)

**Time Complexity**: O(N+N) <br />
**Space Complexity**: O(1)