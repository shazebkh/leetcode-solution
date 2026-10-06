class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map <int,int> freq;
        for(int num:arr){
            freq[num]++;
        }
        int largest=-1;
        for(auto x:freq){
            if(x.first==x.second){
                largest=max(x.first,largest);
            }
            
        }
        return largest;
    }
};