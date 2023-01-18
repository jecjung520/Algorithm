#include <iostream>
#include <vector>

using namespace std;

bool stringCompare(string str1, string str2) {
    int index1 = str1.length() - 1, index2 = str2.length() - 1;
    while (index1 >= 0 && index2 >= 0) {
        int b1 = 0, b2 = 0;
        while (str1[index1] == '#') {
            b1++;
            index1--;
        }
        while (str2[index2] == '#') {
            b2++;
            index2--;
        }
        index1 -= b1;
        index2 -= b2;
        if (str1[index1] != str2[index2]) return false;
        if (index1 >= 0) index1--;
        if (index2 >= 0) index2--;
    }
    return true;
}

int main(int argc, char *argv[]) {
  cout << stringCompare("xy#z", "xzz#") << endl;
  cout << stringCompare("xy#z", "xyz#") << endl;
  cout << stringCompare("xp#", "xyz##") << endl;
  cout << stringCompare("xywrrmp", "xywrrmu#p") << endl;
}