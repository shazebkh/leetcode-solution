class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      int i=0;
      while(i<nums.size()-1)
      {
        int x=nums[i]^nums[i+1];
        if(x==0)
        {
            return true;
        }
        i++;
      }
      return false;  
    }
};