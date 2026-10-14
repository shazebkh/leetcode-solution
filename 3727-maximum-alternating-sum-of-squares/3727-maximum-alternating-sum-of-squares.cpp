class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
    for(auto &num:nums){
        if(num<0){
            num=-num;
        }
    }
        sort(nums.begin(),nums.end());
        int low=0,high=nums.size()-1;
        long long sum=0;
        while(low<high){
            sum+=(1LL*nums[high]*nums[high])-(1LL*nums[low]*nums[low]);
            low++;
            high--;
        }
        if(low==high){
        sum=sum+(1LL*nums[low]*nums[low]);
        }
        return sum;
    }
};