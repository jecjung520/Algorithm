#include <iostream>
#include <vector>

using namespace std;

bool isClosedIsland(vector<vector<int>>& matrix, vector<vector<bool>>& visited, int x, int y) {
    if (x < 0 || x >= matrix.size() || y < 0 || y >= matrix[0].size()) return false;
    if (matrix[x][y] == 0 || visited[x][y]) return true;

    visited[x][y] = true;

    bool isClosed = true;

    isClosed &= isClosedIsland(matrix, visited, x + 1, y);
    isClosed &= isClosedIsland(matrix, visited, x - 1, y);
    isClosed &= isClosedIsland(matrix, visited, x, y + 1);
    isClosed &= isClosedIsland(matrix, visited, x, y - 1);

    return isClosed;
}

int countClosedIsland(vector<vector<int>>& matrix) {
    int row = matrix.size();
    int col = matrix[0].size();
    int count = 0;
    vector<vector<bool>> visited(row, vector<bool>(col, false));

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (matrix[i][j] == 1 && !visited[i][j]) {
                if (isClosedIsland(matrix, visited, i, j)) {
                    count++;
                }
            }
        }
    }
    return count;
}

int main()
{
    vector<vector<int>> vec = vector<vector<int>>{
        {1, 1, 0, 0, 0},
        {0, 1, 0, 0, 0},
        {0, 0, 1, 1, 0},
        {0, 1, 1, 0, 0},
        {0, 0, 0, 0, 0}};
    cout << countClosedIsland(vec) << endl;

    vec = vector<vector<int>>{
        {0, 0, 0, 0},
        {0, 1, 0, 0},
        {0, 1, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 0, 0}};
    cout << countClosedIsland(vec) << endl;

    return 0;
};