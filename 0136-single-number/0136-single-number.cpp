class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (int x : nums) {
            freq[x]++;
        }
        for (auto x : freq) {
            if (x.second == 1) {
                return x.first; // return the element
            }
        }
        return -1;
        //efficiency
        //Current complexity:O(N)
        //Suggested complexity:O(N)
        //Suggestions:Use XOR operation to achieve constant space complexity while maintaining linear time.
    }
};
