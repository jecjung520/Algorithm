# Problem 3. Minimum Window Sort - Medium

## Problem
Given an array, find length of smallest subarray when sorted will sort the whole array.

## Solution
First find first elements out of order. Then find maximum and minimum of the subarray. Extend subarray from beginning to include any number bigger than min of subarray. Extend subarray from end to include any number smaller than max of subarray. <br />
[Dutch National Flag](https://github.com/jecjung520/Algorithm/blob/main/Two%20Pointers/Dutch%20National%20Flag%20Problems%20-%20Medium/dutchFlag.cc)

**Time Complexity**: O(M + N) <br />
**Space Complexity**: O(1)
