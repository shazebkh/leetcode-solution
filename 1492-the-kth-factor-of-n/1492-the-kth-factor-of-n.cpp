class Solution {
public:
    int kthFactor(int n, int k) {
        int factor[n];
        int i=1;
        int index=0;
        while(i<=n)
        {
            if(n%i==0)
            {
                factor[index]=i;
                index++;
            }
            i++; 
        }
        if(index<k)
        {
            return -1;
        }
        return factor[k-1];
    }
};