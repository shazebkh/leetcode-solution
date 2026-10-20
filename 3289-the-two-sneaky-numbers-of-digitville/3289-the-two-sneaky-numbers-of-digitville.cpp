class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int num:nums){
            freq[num]++;
        }
        vector<int> ans;
        for(auto x:freq){
            if(x.second>1){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};