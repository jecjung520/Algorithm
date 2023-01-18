# Problem 3. Minimum Window Sort - Medium

## Problem
Given an array, find length of smallest subarray when sorted will sort the whole array.

## Solution
First find first elements out of order. Then find maximum and minimum of the subarray. Extend subarray from beginning to include any number bigger than min of subarray. Extend subarray from end to include any number smaller than max of subarray. <br />
[Minimum Window Sort](https://github.com/jecjung520/Algorithm/blob/main/Two%20Pointers/Problem%203.%20Minimum%20Window%20Sort%20-%20Medium/sortSubarray.cc)

**Time Complexity**: O(N) <br />
**Space Complexity**: O(1)
