class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map <int,int> freq;
        int count=0;
        for(auto num:nums){
            freq[num]++;
            count=max(count,freq[num]);
        }
        vector<vector<int>> ans(count);
        for(auto x:freq){
            int num=x.first;
            int freq=x.second;
            for(int i=0;i<freq;i++){
            ans[i].push_back(num);
        }
        }
        return ans;
    }
};