# Maximum Sum Subarray of Size K - Easy

## Problem
Given an array of integers, find maximum sum of any subarray of size 'K'.

## Solution 1 - Brute Force
Using two for loops, calculate sum of all subarrays of size 'K'. <br />
[Brute Force](https://github.com/jecjung520/Coding-Test-Algorithms/blob/main/Coding%20Patterns/Sliding%20Windows/1.%20Maximum%20Sum%20Subarray%20of%20Size%20K%20-%20Easy/bruteMaxSum.cc)

**Time Complexity**: O(N*K) <br />
**Space Complexity**: O(N)

## Solution 2 - Sliding Window
Add all elements up to index k. Now, compare each sum with maxSum and subtract left item at each iteration. <br />
[Sliding Window](https://github.com/jecjung520/Coding-Test-Algorithms/blob/main/Coding%20Patterns/Sliding%20Windows/1.%20Maximum%20Sum%20Subarray%20of%20Size%20K%20-%20Easy/slideMaxSum.cc)

**Time Complexity**: O(N) <br />
**Space Complexity**: O(1)