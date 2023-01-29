#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

void dfs(vector<vector<int>>& matrix, vector<vector<bool>>& visited, int x, int y, string &islandTraversal, string direction) {
    if (x < 0 || x >= matrix.size() || y < 0 || y >= matrix[0].size()) return;
    if (matrix[x][y] == 0 || visited[x][y]) return;

    visited[x][y] = true;

    islandTraversal += direction;

    dfs(matrix, visited, x+1, y, islandTraversal, "D");
    dfs(matrix, visited, x-1, y, islandTraversal, "U");
    dfs(matrix, visited, x, y+1, islandTraversal, "R");
    dfs(matrix, visited, x, y-1, islandTraversal, "L");

    islandTraversal += "B";
}

int findDistinctIsland(vector<vector<int>>& matrix) {
    int row = matrix.size();
    int col = matrix[0].size();
    vector<vector<bool>> visited(row, vector<bool>(col, false));
    unordered_set<string> islandSet;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (matrix[i][j] == 1 && !visited[i][j]) {
                string islandTraversal = "";
                dfs(matrix, visited, i, j, islandTraversal, "O");
                islandSet.insert(islandTraversal);
            }
        }
    }
    return islandSet.size();
}

int main()
{
    vector<vector<int>> vec = vector<vector<int>>{
        {1, 1, 0, 1, 1},
        {1, 1, 0, 1, 1},
        {0, 0, 0, 0, 0},
        {0, 1, 1, 0, 1},
        {0, 1, 1, 0, 1}};
    cout << findDistinctIsland(vec) << endl;

    vec = vector<vector<int>>{
        {1, 1, 0, 1},
        {0, 1, 1, 0},
        {0, 0, 0, 0},
        {1, 1, 0, 0},
        {0, 1, 1, 0}};
    cout << findDistinctIsland(vec) << endl;

    return 0;
};