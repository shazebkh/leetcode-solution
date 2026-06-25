class Solution {
public:
    int trailingZeroes(int n) {
        //int f=1;
        int c=0;
        int i=5;
        while(i<=n)
        {
            c=c+(n/i);
            i=i*5;
        }
        return c;
    }
};