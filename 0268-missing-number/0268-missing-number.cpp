class Solution {
public:
    int missingNumber(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      int i=0;
      int num=0;
      while(i<nums.size())
      {
        if(num==nums[i])
        {
            i++;
            num++;
        }
        else
        {
            return num;
        }

      }
      
      return num;
    }
};