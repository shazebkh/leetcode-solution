class Solution {
public:
    int reverseDegree(string s) {
       long long degree=0; 
       for(int i=0;i<s.size();i++)
       {
            int x = s[i] - 'a';
            degree+=(26-x)*(i+1);
       }
       return degree; 
    }
};