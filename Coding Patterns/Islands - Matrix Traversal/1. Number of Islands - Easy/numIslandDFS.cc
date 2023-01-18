#include <iostream>
#include <vector>

using namespace std;

void visitIsland(vector<vector<int>>& matrix, int x, int y) {
    if (x < 0 || x >= matrix.size() || y < 0 || y >= matrix.size()) return;
    if (matrix[x][y] == 0) return;

    matrix[x][y] = 0; // mark cell visited

    visitIsland(matrix, x + 1, y);
    visitIsland(matrix, x - 1, y);
    visitIsland(matrix, x, y + 1);
    visitIsland(matrix, x, y - 1);
}

int countIslands(vector<vector<int>>& matrix) {
    int totalIslands = 0;
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            if (matrix[i][j] == 1) {
                visitIsland(matrix, i, j);
                totalIslands++;
            }
        }
    }
    return totalIslands;
}

int main() {
    vector<vector<int>> vec = {
        {0, 1, 1, 1, 0},
        {0, 0, 0, 1, 1},
        {0, 1, 1, 1, 0},
        {0, 1, 1, 0, 0},
        {0, 0, 0, 0, 0}};
    cout << countIslands(vec) << endl;

    vec = vector<vector<int>>{
        {1, 1, 1, 0, 0},
        {0, 1, 0, 0, 1},
        {0, 0, 1, 1, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0}};
    cout << countIslands(vec) << endl;

    return 0;
};