# Problem 3. Smallest Window containing Substring - Hard

## Problem
Given a string and pattern find the smallest substring with all character occurence of pattern. 

## Solution - Sliding Window with Unordered Map
Similar to **Permutation in a String**. Store pattern in map and find every permutation of pattern in string. Keep count of every matchin character. When all characters are matched, shrink window and keep smallest string with all matching substring. <br />
[Sliding Window with Unordered Map](https://github.com/jecjung520/Coding-Test-Algorithms/blob/main/Coding%20Patterns/Sliding%20Windows/Problem%203.%20Smallest%20Window%20containing%20Substring%20-%20Hard/substringWindow.cc)

**Time Complexity**: O(N+M) <br />
**Space Complexity**: O(N)