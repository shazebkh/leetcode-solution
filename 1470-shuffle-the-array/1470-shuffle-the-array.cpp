class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int right=nums.size()/2;
        int left=0;
        vector<int> ans;
        while(right<nums.size()){
            ans.push_back(nums[left]);
            left++;
            ans.push_back(nums[right]);
            right++;
        }
        return ans;
    }
};