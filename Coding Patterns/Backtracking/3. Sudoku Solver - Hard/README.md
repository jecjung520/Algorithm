# Sudoku Solver - Hard

## Problem
Write a program to complete Sudoku board.

## Solution - Backtracking
1. Find first empty cell.
2. Try every number for the empty cell. Check its validity with 3x3 sub-grid.
3. If the number is valid, fill the cell and recursively call function to move to next empty cell.
4. If the number is not valid, backtrack to previous state with different number.
<br />
[Binary Search](https://github.com/jecjung520/Algorithm/blob/main/Two%20Pointers/Pair%20with%20Target%20Sum%20-%20Easy/targetSum1.cc)

**Time Complexity**: O(1) board size is fixed and no variable input. <br />
**Space Complexity**: O(1)