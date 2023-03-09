#include <iostream>
#include <vector>
using namespace std;

const int N = 9;

// Helper function to check if a given number is valid in the current cell
bool isValid(vector<vector<char>> &board, int row, int col, char num)
{
  // Check if we already have the same number in the same row, col or box
  for (int x = 0; x < N; x++)
  {
    if (board[row][x] == num)
      return false; // Check if the same number is in the same row
    if (board[x][col] == num)
      return false; // Check if the same number is in the same col
    if (board[(row / 3) * 3 + x / 3][(col / 3) * 3 + x % 3] == num)
      return false; // Check if the same number is in the same 3x3 box
  }
  return true;
}

bool solveSudoku(vector<vector<char>> &board)
{
  for (int row = 0; row < N; row++)
  {
    for (int col = 0; col < N; col++)
    {
      if (board[row][col] == '.')
      { // If we find an empty cell
        for (char num = '1'; num <= '9'; num++)
        { // Try every number from 1-9
          if (isValid(board, row, col, num))
          {                        // Check if the number is valid in the current cell
            board[row][col] = num; // If it is valid, fill the cell with the number
            if (solveSudoku(board))
              return true; // Recursively call the function to solve the rest of the board
            else
              board[row][col] = '.'; // If the current number doesn't lead to a solution, backtrack by emptying the cell
          }
        }
        return false; // If we have tried every number and none of them lead to a solution, return false
      }
    }
  }
  return true; // If the board is completely filled, return true
}

int main()
{

// Test case 1
vector<vector<char>> board = {
      {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
      {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
      {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
      {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
      {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
      {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
      {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
      {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
      {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

  if (solveSudoku(board))
  {
    for (int i = 0; i < N; i++)
    {
      for (int j = 0; j < N; j++)
      {
        cout << board[i][j] << " ";
      }
      cout << endl;
    }
  }
  else
  {
    cout << "No solution exists";
  }
  cout << endl;
  /* expected output:
    5 3 4 6 7 8 9 1 2
    6 7 2 1 9 5 3 4 8
    1 9 8 3 4 2 5 6 7
    8 5 9 7 6 1 4 2 3
    4 2 6 8 5 3 7 9 1
    7 1 3 9 2 4 8 5 6
    9 6 1 5 3 7 2 8 4
    2 8 7 4 1 9 6 3 5
    3 4 5 2 8 6 1 7 9
  */

  // Test case 2
  board = {
      {'8', '.', '.', '.', '.', '.', '.', '.', '.'},
      {'.', '.', '3', '6', '.', '.', '.', '.', '.'},
      {'.', '7', '.', '.', '9', '.', '2', '.', '.'},
      {'.', '5', '.', '.', '.', '7', '.', '.', '.'},
      {'.', '.', '.', '.', '4', '5', '7', '.', '.'},
      {'.', '.', '.', '1', '.', '.', '.', '3', '.'},
      {'.', '.', '1', '.', '.', '.', '.', '6', '8'},
      {'.', '.', '8', '5', '.', '.', '.', '1', '.'},
      {'.', '9', '.', '.', '.', '.', '4', '.', '.'}};
  if (solveSudoku(board))
  {
    for (int i = 0; i < N; i++)
    {
      for (int j = 0; j < N; j++)
      {
        cout << board[i][j] << " ";
      }
      cout << endl;
    }
  }
  else
  {
    cout << "No solution exists";
  }
  /* expected output:
    8 1 2 7 5 3 6 4 9
    9 4 3 6 8 2 1 7 5
    6 7 5 4 9 1 2 8 3
    1 5 4 2 3 7 8 9 6
    3 6 9 8 4 5 7 2 1
    2 8 7 1 6 9 5 3 4
    5 2 1 9 7 4 3 6 8
    4 3 8 5 2 6 9 1 7
    7 9 6 3 1 8 4 5 2
*/
}
