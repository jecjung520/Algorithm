# Fruits into Baskets - Medium

## Problem
An array of characters is given. Return the greatest length of adjacent subarray of two characters.

## Solution - Sliding Window with Unordered Set
Add chars of strings to basket (unordered_set) until the size is greater than 2. When size of basket is greater than 2, decrement basket size and remove char from windowStart index. <br />
[Fast and Slow Pointers - Length](https://github.com/jecjung520/Algorithm/blob/main/Coding%20Patterns/Fast%20and%20Slow%20Pointers/1.%20LinkedList%20Cycles-%20Easy/cycleLength.cc)

**Time Complexity**: O(N) <br />
**Space Complexity**: O(1) - as maximum of 3 fruits are stored in basket