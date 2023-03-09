#include <iostream>
#include <unordered_set>
using namespace std;

class Solution
{
public:
  int maxUniqueSplit(string s)
  {
    return splitAndCount(s, 0, unordered_set<string>());
  }

private:
  int splitAndCount(string s, int start, unordered_set<string> set)
  {
    // base case, if we have reached the end of the input string, return the size of the set
    if (start == s.length())
      return set.size();

    int count = 0;
    // loop through all substrings starting from the current start position
    for (int i = start + 1; i <= s.length(); i++)
    {
      string string = s.substr(start, i - start);
      // if the substring is not in the set, add it and recursively call the function with the new start position
      if (set.count(string) == 0)
      {
        set.insert(string);
        count = max(count, splitAndCount(s, i, set));
        set.erase(string); // remove the substring from the set and backtrack
      }
    }
    return count; // return the maximum count of unique substrings found
  }
};

int main()
{
  Solution sol;

  // Test Case 1
  string input1 = "abcabc";
  int output1 = sol.maxUniqueSplit(input1);
  cout << "maxUniqueSplit(" << input1 << ") = " << output1 << endl; // Expected: 4

  // Test Case 2
  string input2 = "aab";
  int output2 = sol.maxUniqueSplit(input2);
  cout << "maxUniqueSplit(" << input2 << ") = " << output2 << endl; // Expected: 2

  // Test Case 3
  string input3 = "ababab";
  int output3 = sol.maxUniqueSplit(input3);
  cout << "maxUniqueSplit(" << input3 << ") = " << output3 << endl; // Expected: 4

  // Test Case 4
  string input4 = "";
  int output4 = sol.maxUniqueSplit(input4);
  cout << "maxUniqueSplit(" << input4 << ") = " << output4 << endl; // Expected: 0

  // Test Case 5
  string input5 = "a";
  int output5 = sol.maxUniqueSplit(input5);
  cout << "maxUniqueSplit(" << input5 << ") = " << output5 << endl; // Expected: 1

  return 0;
}
