#include <iostream>
#include <vector>

using namespace std;

void fillDFS(vector<vector<int>>& matrix, int x, int y, int oldColor, int newColor) {
    if (x < 0 || x >= matrix.size() || y < 0 || y >= matrix[0].size()) return; // if invalid cell return
    if (matrix[x][y] != oldColor) return; // if not required color return

    matrix[x][y] = newColor; // update new color - starting point

    fillDFS(matrix, x + 1, y, oldColor, newColor);
    fillDFS(matrix, x - 1, y, oldColor, newColor);
    fillDFS(matrix, x, y + 1, oldColor, newColor);
    fillDFS(matrix, x, y - 1, oldColor, newColor);
}

vector<vector<int>>& floodFill(vector<vector<int>>& matrix, int x, int y, int newColor) {
    if (matrix[x][y] != newColor)
        fillDFS(matrix, x, y, matrix[x][y], newColor);
    
    return matrix;
}

int main()
{
    vector<vector<int>> vec = {
        {0, 1, 1, 1, 0},
        {0, 0, 0, 1, 1},
        {0, 1, 1, 1, 0},
        {0, 1, 1, 0, 0},
        {0, 0, 0, 0, 0}};
    auto res = floodFill(vec, 1, 3, 2);
    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
            cout << res[i][j] << " ";
        cout << endl;
    }
    cout << endl;

    vec = vector<vector<int>>{
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 1, 1, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0}};
    res = floodFill(vec, 3, 2, 5);
    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
            cout << res[i][j] << " ";
        cout << endl;
    }

    return 0;
};