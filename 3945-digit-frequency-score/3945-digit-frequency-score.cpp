class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int,int> freq;
        int rem;
        while(n>0){
            rem=n%10;
            freq[rem]++;
            n/=10;
        }
        long long sum=0;
        for(auto x:freq){
            int n1=x.first,n2=x.second;
            sum+=n1*n2;
        }
        return sum;
    }
};