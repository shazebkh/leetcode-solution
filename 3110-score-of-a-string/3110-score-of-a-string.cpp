class Solution {
public:
    int scoreOfString(string s) {
        int sum=0,x;
        for(int i=0;i<s.size()-1;i++){
            x=int(s[i])-int(s[i+1]);
            sum+=abs(x);
        }
        return sum;
    }
};