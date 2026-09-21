class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        if(nums.size()==2)
        {
            return nums;
        }
        unordered_map <int,int> mp;
        vector<int> target;
        for(auto x:nums)
        {
            mp[x]++;
        }
        for(auto x:mp)
        {
            if(x.second==1){
                target.push_back(x.first);
                 
            }
        }
        return target;
    }
};