class Solution 
{
    public:
        vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int, int> numMap;
        int a=nums.size();
         for(int i=0;i<a;i++)
            {
                numMap[nums[i]]=i;       
            }
        for(int j=0;j<a;j++)
        {
            int comp=target-nums[j];
            if(numMap.count(comp)&&numMap[comp]!=j)
            {
                return {j,numMap[comp]};
            }
        }
        return{};
    }
};