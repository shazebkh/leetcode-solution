class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       erase(nums,val);//Delete all occurance in a vector 
       return nums.size(); 
    }
};