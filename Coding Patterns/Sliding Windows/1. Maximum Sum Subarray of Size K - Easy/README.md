# Maximum Sum Subarray of Size K - Easy

## Problem
Given an array of integers, find maximum sum of any subarray of size 'K'.

## Solution 1 - Brute Force
Using two for loops, calculate sum of all subarrays of size 'K'. <br />
[Fast and Slow Pointers](https://github.com/jecjung520/Algorithm/blob/main/Coding%20Patterns/Fast%20and%20Slow%20Pointers/1.%20LinkedList%20Cycles-%20Easy/cycleLinkedList.cc)

**Time Complexity**: O(N*K) <br />
**Space Complexity**: O(N)

## Solution 2 - Sliding Window
Add all elements up to index k. Now, compare each sum with maxSum and subtract left item at each iteration. <br />
[Fast and Slow Pointers - Length](https://github.com/jecjung520/Algorithm/blob/main/Coding%20Patterns/Fast%20and%20Slow%20Pointers/1.%20LinkedList%20Cycles-%20Easy/cycleLength.cc)

**Time Complexity**: O(N) <br />
**Space Complexity**: O(1)