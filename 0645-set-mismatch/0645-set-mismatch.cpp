class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int> freq;
        long int sum=0;
        for(int num:nums){
            freq[num]++;
            sum+=num;
        }
        int n=nums.size();
        vector<int> ans;
        int repeated;
        for(auto x:freq){
            int num=x.first;
            int frequency=x.second;
            if(frequency>1){
                ans.push_back(num);
                repeated=x.first;
            }
        }
        int totalsum=(n*(n+1))/2;
        int num=(totalsum+repeated)-sum;
        ans.push_back(num);
        return ans;
    }
};