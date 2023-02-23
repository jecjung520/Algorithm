#include <iostream>
#include <vector>

using namespace std;

class Knapsack {
public:
    int solveKnapsack(vector<int>& profit, vector<int>& weight, int capacity) {
        return this->knapsackRecursive(profit, weight, capacity, 0);
    }

private:
    int knapsackRecursive(vector<int>& profit, vector<int>& weight, int capacity, int currentIndex) {
        if (capacity <= 0 || currentIndex >= profit.size()) return 0;

        // recursive call after choosing the element at the currentIndex
        // if the weight of the element at currentIndex exceeds the capacity, we shouldn't process this
        int profit1 = 0;
        if (weight[currentIndex] <= capacity) {
            profit1 = profit[currentIndex] + knapsackRecursive(profit, weight, capacity - weight[currentIndex], currentIndex+1);
        }

        int profit2 = knapsackRecursive(profit, weight, capacity, currentIndex+1);

        return max(profit1, profit2);
    }
};

int main() {
    Knapsack ks;
    vector<int> profits = {1, 6, 10, 16};
    vector<int> weights = {1, 2, 3, 5};
    int maxProfit = ks.solveKnapsack(profits, weights, 7);
    cout << "Total knapsack profit ---> " << maxProfit << endl;
    maxProfit = ks.solveKnapsack(profits, weights, 6);
    cout << "Total knapsack profit ---> " << maxProfit << endl;
}