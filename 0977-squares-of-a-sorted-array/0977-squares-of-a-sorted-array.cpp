class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> v={};
        int sq;
        for(int i=0;i<nums.size();i++)
        {
            sq=pow(nums[i],2);
            v.push_back(sq);
        }
        sort(v.begin(),v.end());
        return v;
    }
};