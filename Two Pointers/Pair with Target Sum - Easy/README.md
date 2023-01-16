# Pair with Target Sum - Easy

## Problem
A sorted array and target sum is given. Find a pair in array that adds up to the target sum.

## Solution 1 - Binary Search
Start with one pointer in the beginning and one in the end.

Time Complexity: O(NlogN)
Space Complexity: O(1)

## Solution 2 - Hash Table
When we are at number X, find number Y that would make Sum - X = Y

Time Complexity: O(N)
Space Complexity: O(N)