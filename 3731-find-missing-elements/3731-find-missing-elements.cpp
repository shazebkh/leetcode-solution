class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> res={};
        sort(nums.begin(),nums.end());
        int max=nums[nums.size()-1];
        int min=nums[0];
        int i=0;
        while(min<=max)
        {
            if(min!=nums[i])
            {
                res.push_back(min);
            }
            else
            {
                i++;
            }
            min++;
        }
        return res;
    }
};