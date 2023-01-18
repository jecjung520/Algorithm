#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void visitIsland(vector<vector<int>>& matrix, vector<vector<bool>>& visited, int x, int y) {
    queue<pair<int,int>> neighbors;
    neighbors.push({x,y});
    while (!neighbors.empty()) {
        auto p = neighbors.front();
        int row = p.first, col = p.second;
        neighbors.pop();

        if (row < 0 || row >= matrix.size() || col < 0 || col >= matrix[0].size()) continue;
        if (matrix[row][col] == 0 || visited[row][col]) continue;

        visited[row][col] = true;

        neighbors.push({row + 1, col});
        neighbors.push({row - 1, col});
        neighbors.push({row, col + 1});
        neighbors.push({row, col - 1});
    }
}

int countIslands(vector<vector<int>>& matrix) {
    int totalIslands = 0;
    vector<vector<bool>> visited(matrix.size(), vector<bool>(matrix[0].size(), false));
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            if (!visited[i][j] && matrix[i][j] == 1) {
                visitIsland(matrix, visited, i, j);
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
