#include <iostream>
#include <vector>

using namespace std;

int dfs(vector<vector<int>>& matrix, vector<vector<bool>>& visited, int x, int y) {
    if (x < 0 || x >= matrix.size() || y < 0 || y >= matrix[0].size()) return 1;
    if (matrix[x][y] == 0) return 1;
    if (visited[x][y]) return 0;

    visited[x][y] = true;

    int edgeCount = 0;

    edgeCount += dfs(matrix, visited, x+1, y);
    edgeCount += dfs(matrix, visited, x-1, y);
    edgeCount += dfs(matrix, visited, x, y+1);
    edgeCount += dfs(matrix, visited, x, y-1);

    return edgeCount;
}

int findPerimeter(vector<vector<int>>& matrix) {
    int row = matrix.size();
    int col = matrix[0].size();
    vector<vector<bool>> visited(row, vector<bool>(col, false));

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (matrix[i][j] == 1 && !visited[i][j]) return dfs(matrix, visited, i, j);
        }
    }
    return 0;
}

int main()
{
    vector<vector<int>> vec = vector<vector<int>>{
        {1, 1, 0, 0, 0},
        {0, 1, 0, 0, 0},
        {0, 1, 0, 0, 0},
        {0, 1, 1, 0, 0},
        {0, 0, 0, 0, 0}};
    cout << findPerimeter(vec) << endl;

    vec = vector<vector<int>>{
        {0, 0, 0, 0},
        {0, 1, 0, 0},
        {0, 1, 1, 0},
        {0, 1, 1, 0},
        {0, 1, 0, 0}};
    cout << findPerimeter(vec) << endl;

    return 0;
};