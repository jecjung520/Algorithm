#include <iostream>
#include <vector>

using namespace std;

string convert(string s, int numRows) {
    vector<vector<char>> matrix(numRows, vector<char>(int(s.length()/2)));
    int p = 0, col = 0;
    while (p <= s.length()) {
        for (int i = 0; i < s.length(); i++) {
            matrix[i][col] = s[p++];
        }
        col++;
        for (int j = s.length() - 2; j > 0; j--) {
            matrix[col--][j] = s[p++];
        }
    }
    string res = "";
    for (auto& v : matrix) {
        for (auto& i : v) res += i;
    }
    return res;
}

int main() {
    string s = "PAYPALISHIRING";
    int numRows = 3;
    cout << convert(s, numRows);
}