class Solution {
public:
    int maxDepth(string s) {
        int count=0,maxcount=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                count++;
            }
            else if(s[i]==')'){
                maxcount=max(count,maxcount);
                count--;    
            }
            else{
                continue;
            }
        }
    return max(count,maxcount);
    }
};