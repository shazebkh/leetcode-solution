class Solution {
public:
    int trailingZeroes(int n) {
        //This problem solved by using Lagendre's Theorem
        //i.e Vp(n!)=∑[n/p^k] where k=1 to ∞ 
        int c=0;
        int i=5;
        while(i<=n)
        {
            //Here for trailing zero we have to put p=5
            //And keep adding till the condition become false
            c=c+(n/i);
            //We require i to increas in 5's power.
            i=i*5;
        }
        return c;
    }
};
