class Solution {
public:
    int lengthOfLastWord(string s) {

        int k=s.size()-1;
        while (!s.empty() && isspace(s.back()))
        {s.pop_back();
        }
        string ans="";
        while(k>=0)
        {
            if(s[k]==' '){
                ans=s.substr(k, s.size());
                break;
            }
            k--;
        }
        if(k==-1)
        {
            return s.size();
        }
      return ans.size()-1;
    }
};