#include <iostream>
#include <vector>

using namespace std;

int visitIsland(vector<vector<int>>& matrix, int x, int y) {
    if (x < 0 || x >= matrix.size() || y < 0 || y >= matrix[0].size()) return 0; // return if invalid cell
    if (matrix[x][y] == 0) return 0; // return if water cell

    matrix[x][y] = 0; // mark cell visited

    int area = 1; // count current cell
    // recursively visit all neighboring cells
    area += visitIsland(matrix, x + 1, y); // lower cell
    area += visitIsland(matrix, x - 1, y); // upper cell
    area += visitIsland(matrix, x, y + 1); // right cell
    area += visitIsland(matrix, x, y - 1); // left cell

    return area;
}

int maxIsland(vector<vector<int>>& matrix) {
    int biggestArea = 0;
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[0].size(); j++) {
            if (matrix[i][j] == 1) {
                biggestArea = max(biggestArea, visitIsland(matrix, i, j));
            }
        }
    }
    return biggestArea;
}

int main() {
    vector<vector<int>> vec = vector<vector<int>>{
        {1, 1, 1, 0, 0},
        {0, 1, 0, 0, 1},
        {0, 0, 1, 1, 0},
        {0, 1, 1, 0, 0},
        {0, 0, 1, 0, 0}};
    cout << maxIsland(vec) << endl;

    return 0;
};