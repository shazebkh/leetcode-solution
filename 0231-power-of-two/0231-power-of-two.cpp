class Solution {
public:
    bool isPowerOfTwo(int n) {
        int p = 0;
        long int x = n;
        x = abs(x);
        while (x > 0) {
            if (x % 2 == 0) {
                p++;
            }
            x = x / 2;
        }
        if (n == pow(2, p)) {
            return true;
        }
        return false;
    }
};