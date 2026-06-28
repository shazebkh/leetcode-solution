class Solution {
public:
    bool isPowerOfFour(int n) {
    int p=0;
    long int x=n;
    x=abs(x);
    while(x>0)
    {
        if(x%4==0)
        {
            p++;
        }
        x=x/4;
    }
    if(n==pow(4,p))
    {
        return true;
    }
    return false;
        
    }
};