#include <iostream>
#include <vector>

using namespace std;

static int remove(vector<int> arr) {
    int nextNonDup = 1;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[nextNonDup - 1] != arr[i])
            arr[nextNonDup++] = arr[i];
    }
    return nextNonDup;
}

int main() {
    vector<int> arr = {2, 3, 3, 3, 6, 9, 9};
    cout << "Array new length: " << remove(arr) << endl;

    arr = vector<int>{2, 2, 2, 11};
    cout << "Array new length: " << remove(arr) << endl;
}