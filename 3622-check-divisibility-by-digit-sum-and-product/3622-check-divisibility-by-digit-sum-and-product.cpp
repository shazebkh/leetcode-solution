class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int product=1;
        int rem=0;
        int temp=n;
        while(n>0)
        {
            rem=n%10;
            sum=sum+rem;
            product=product*rem;
            n/=10;
        }
        int total=sum+product;
        if(temp%total==0)
        {
            return true;
        }
        return false;
    }
};