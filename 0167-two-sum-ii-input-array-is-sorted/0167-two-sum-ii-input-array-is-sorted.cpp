class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        while(left<right){
            int total=nums[left]+nums[right];
            if(total>target){
                right-=1;
            }
            else if(total<target){
                left+=1;
            }
            else{
                return {left+1,right+1};
            }
        }
        return {};
    }
};