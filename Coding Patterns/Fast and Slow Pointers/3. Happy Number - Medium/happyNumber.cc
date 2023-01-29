class Solution {
public:
    int getNext(int n) {
        int sum = 0;
        while (n > 0) {
            int r = n % 10;
            n /= 10;
            sum += (r * r);
        }
        return sum;
    }

    bool isHappy(int n) {
        int slowRunner = n;
        int fastRunner = getNext(n);

        while (fastRunner != 1 && slowRunner != fastRunner) {
            slowRunner = getNext(slowRunner);
            fastRunner = getNext(getNext(fastRunner));
        }
        return fastRunner == 1;
    }
};