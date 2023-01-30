# Smallest Subarray with a Greater Sum - Easy

## Problem
Given an array of integers, find the length of smallest subarray with sum greater or equal to S.

## Solution - Sliding Window
Add elements until window sum becomes greater or equal to S. From here, compare with minSum and subtract left index until window sum becomes less than S. <br />
[Fast and Slow Pointers - Length](https://github.com/jecjung520/Algorithm/blob/main/Coding%20Patterns/Fast%20and%20Slow%20Pointers/1.%20LinkedList%20Cycles-%20Easy/cycleLength.cc)

**Time Complexity**: O(N+N) <br />
**Space Complexity**: O(1)