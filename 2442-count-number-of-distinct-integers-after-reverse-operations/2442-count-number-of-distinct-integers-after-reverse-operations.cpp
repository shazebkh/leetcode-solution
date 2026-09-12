class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        vector<int> reverse;
        unordered_map<int,int> freq;
        for(int i=0;i<nums.size();i++)
        {   int rev=0;
            int n=nums[i];
            while(n>0)
            {
                rev=rev*10+n%10;
                n/=10;
            }
            reverse.push_back(rev);
        }
        nums.insert(nums.end(),reverse.begin(),reverse.end());
        for(int num:nums){
            freq[num]++;
        }
        int sum=0;
        for(auto [num,frequency]:freq){
            if(frequency==1)
            {
                sum+=frequency;
            }
            else
            {
                sum+=1;
            }
            
        }
        return sum;
    }
};