#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

pair<int, int> search(vector<int> arr, int sum) {
    unordered_map<int, int> mp;

    for (int i = 0; i < arr.size(); i++) {
        if (mp.find(sum - arr[i]) != mp.end()) 
            return make_pair(mp[sum - arr[i]], i);
        else
            mp[arr[i]] = i;
    }
    return make_pair(-1, -1);
}

int main() {
    auto result = search(vector<int>{1, 2, 3, 4, 6}, 6);
    cout << "Pair with target sum: [" << result.first << ", " << result.second << "]" 
        << endl;
    result = search(vector<int>{2, 5, 9, 11}, 11);
    cout << "Pair with target sum: [" << result.first << ", " << result.second << "]" 
        << endl;
}