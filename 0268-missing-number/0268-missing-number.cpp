class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        long int totalsum=(n*(n+1))/2;
        long int sum=0;
        for(int i=0;i<n;i++)
            {
                sum=sum+nums[i];
            }
        return totalsum-sum;
        //It can be solve using XOR
        //THE SUM OF WHOLE NUMBERS WILL ALWAYS BE A WHOLE NUMBER
    }
};
