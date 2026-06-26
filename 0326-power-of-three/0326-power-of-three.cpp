class Solution {
public:
    bool isPowerOfThree(int n) {
    int p=0;
    long int x=n;
    x=abs(x);
    while(x>0)
    {
        if(x%3==0)
        {
            p++;
        }
        x=x/3;
    }
    if(n==pow(3,p))
    {
        return true;
    }
    return false;
    }
};