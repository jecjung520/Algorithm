#include <iostream>
#include <vector>

using namespace std;

bool dfs(vector<vector<char>>& matrix, vector<vector<bool>>& visited, char start, int x, int y, int prevX, int prevY) {
    if (x < 0 || x >= matrix.size() || y < 0 || y >= matrix[0].size()) return false;
    if (matrix[x][y] != start) return false;
    if (visited[x][y]) return true;

    visited[x][y] = true;

    if (x+1 != prevX && dfs(matrix, visited, start, x+1, y, x, y)) return true;
    if (x-1 != prevX && dfs(matrix, visited, start, x-1, y, x, y)) return true;
    if (y+1 != prevY && dfs(matrix, visited, start, x, y+1, x, y)) return true;
    if (y-1 != prevY && dfs(matrix, visited, start, x, y-1, x, y)) return true;

    return false;
}

bool hasCycle(vector<vector<char>>& matrix) {
    int row = matrix.size();
    int col = matrix[0].size();
    vector<vector<bool>> visited(row, vector<bool>(col, false));

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (!visited[i][j])
                if (dfs(matrix, visited, matrix[i][j], i, j, -1, -1)) return true;
        }
    }
    return false;
}

int main()
{
    vector<vector<char>> vec = vector<vector<char>>{
        {'a', 'a', 'a', 'a'},
        {'b', 'a', 'c', 'a'},
        {'b', 'a', 'c', 'a'},
        {'b', 'a', 'a', 'a'}};
    cout << hasCycle(vec) << endl;

    vec = vector<vector<char>>{
        {'a', 'a', 'a', 'a'},
        {'a', 'b', 'b', 'a'},
        {'a', 'b', 'a', 'a'},
        {'a', 'a', 'a', 'c'}};
    cout << hasCycle(vec) << endl;

    vec = vector<vector<char>>{
        {'a', 'b', 'e', 'b'},
        {'b', 'b', 'b', 'b'},
        {'b', 'c', 'c', 'd'},
        {'c', 'c', 'd', 'd'}};
    cout << hasCycle(vec) << endl;
    return 0;
};