#include <iostream>
#include <vector>
using namespace std;

bool dfs(vector<vector<char>>& board, string word, int i, int j, int k) {
    // check if current coordinates are out of grid or the current cell doesn't match the current character of the word
    if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] != word[k]) {
        return false;
    }
    // check if we have reached the end of the word
    if (k == word.length() - 1) {
        return true;
    }
    // mark the current cell as visited by replacing it with '/'
    char tmp = board[i][j];
    board[i][j] = '/';
    // check all 4 adjacent cells recursively
    bool res = dfs(board, word, i+1, j, k+1) ||
              dfs(board, word, i-1, j, k+1) ||
              dfs(board, word, i, j+1, k+1) ||
              dfs(board, word, i, j-1, k+1);
    // backtrack by replacing the current cell with its original value
    board[i][j] = tmp;
    return res;
}

bool exist(vector<vector<char>>& board, string word) {
    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[0].size(); j++) {
            // start the search from every cell
            if (dfs(board, word, i, j, 0)) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    // Test Case 1
    vector<vector<char>> board = {
        {'A','B','C','E'},
        {'S','F','C','S'},
        {'A','D','E','E'}
    };
    string word = "ABCCED";
    cout << exist(board, word) << endl; // expected output: 1

    // Test Case 2
    board = {
        {'A','B','C','E'},
        {'S','F','C','S'},
        {'A','D','E','E'}
    };
    word = "SEE";
    cout << exist(board, word) << endl; // expected output: 1

    // Test Case 3
    board = {
        {'A','B','C','E'},
        {'S','F','C','S'},
        {'A','D','E','E'}
    };
    word = "ABCB";
    cout << exist(board, word) << endl; // expected output: 0

    // Test Case 4
    board = {{'a','a'}};
    word = "aaa";
    cout << exist(board, word) << endl; // expected output: 0

    // Test Case 5
    board = {{'a'}};
    word = "a";
    cout << exist(board, word) << endl; // expected output: 1

    board = {
        {'a','b','c','d','e'},
        {'f','g','h','i','j'},
        {'k','l','m','n','o'},
        {'p','q','r','s','t'},
        {'u','v','w','x','y'},
        {'z','a','b','c','d'}
    };
    word = "abcde";
    cout << exist(board, word) << endl; // expected output: 1

    // Test Case 7
    board = {
        {'a','b','c','d','e'},
        {'f','g','h','i','j'},
        {'k','l','m','n','o'},
        {'p','q','r','s','t'},
        {'u','v','w','x','y'},
        {'z','a','b','c','d'}
    };
    word = "zabcd";
    cout << exist(board, word) << endl; // expected output: 1
}
