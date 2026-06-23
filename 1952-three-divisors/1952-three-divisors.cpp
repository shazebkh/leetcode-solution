class Solution {
public:
    bool isThree(int n) {
        int c=0;
        int i=1;
        while(n>=i)
        {
            if(n%i==0)
            {
                c++;
            }
            i++;
        }
        if(c==3)
        {
            return true;
        }
        return false;
    }
};