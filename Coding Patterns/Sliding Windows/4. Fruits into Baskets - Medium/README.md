# Fruits into Baskets - Medium

## Problem
An array of characters is given. Return the greatest length of adjacent subarray of two characters.

## Solution - Sliding Window with Unordered Set
Add chars of strings to basket (unordered_set) until the size is greater than 2. When size of basket is greater than 2, decrement basket size and remove char from windowStart index. <br />
[Sliding Window with Unordered Set](https://github.com/jecjung520/Coding-Test-Algorithms/blob/main/Coding%20Patterns/Sliding%20Windows/4.%20Fruits%20into%20Baskets%20-%20Medium/fruitsInBaskets.cc)

**Time Complexity**: O(N) <br />
**Space Complexity**: O(1) - as maximum of 3 fruits are stored in basket