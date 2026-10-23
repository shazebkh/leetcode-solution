class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        //SO;VED USING COUNT SORT
        int n=nums.size()+1;
        vector<int> count(n,0);
        for(int i=0;i<nums.size();i++){
            count[nums[i]]++;
        }
        vector<int> ans;
        for(int i=1;i<count.size();i++){
            if(count[i]==0){
                ans.push_back(i);
            }
            
        }
       return ans;
    }
};