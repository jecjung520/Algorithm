# Pair with Target Sum - Easy

## Problem
A sorted array and target sum is given. Find a pair in array that adds up to the target sum.

## Solution 1 - Binary Search
Start with one pointer in the beginning and one in the end. <br />
[Binary Search](https://github.com/jecjung520/Algorithm/blob/main/Two%20Pointers/Pair%20with%20Target%20Sum%20-%20Easy/targetSum1.cc)

**Time Complexity**: O(NlogN) <br />
**Space Complexity**: O(1)

## Solution 2 - Hash Table
When we are at number X, find number Y that would make Sum - X = Y <br />
[Hash Table](https://github.com/jecjung520/Algorithm/blob/main/Two%20Pointers/Pair%20with%20Target%20Sum%20-%20Easy/targetSum2.cc)

**Time Complexity**: O(N) <br />
**Space Complexity**: O(N)
