class Solution {
public:
    int sumOfPrimesInRange(int n) {
        int rem=0;
        int temp=n;
        while(temp>0)
        {
            rem=rem*10+temp%10;
            temp/=10;
        }
        int ma=max(n,rem);
        int mi=min(n,rem);
        int ans=primesum(ma,mi);
        return ans;
    }
private:
    int primesum(int max,int min)
    {
        int sum=0;
        for(int i=min;i<=max;i++)
        {
            int flag=0;
            if(i==1)
            {
                flag++;
            }
            for(int j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    flag++;
                }
            }
            if(flag==0)
            {
                sum+=i;
            }
        }
        return sum;
    }
};