class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        if(nums.size()==1)
        {
            return nums;
        }
       unordered_map <int,int> mp;
       vector<int>ans;
       for(auto n:nums)
       {
            mp[n]++;
       }
       for(auto n:mp)
       {
            if(n.second>nums.size()/3)
            {
                ans.push_back(n.first);
            }
       }
       return ans;    
    }
};