class Solution {
public:
    int maxDistinct(string s) {
        unordered_map<char,int> freq;
        for(char ch:s){
            freq[ch]++;
        }
        int count=0;
        for(auto x:freq){
            count++;
        }
        return count;
    }
};