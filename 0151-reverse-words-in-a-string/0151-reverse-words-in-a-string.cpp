class Solution {
public:
    string reverseWords(string s) {
        //vector<string> rev;
        //string rem="";
        //for(int i=0;i<s.length();i++)
        //{
        //    if(s[i]!=' ')
        //    {
        //        rem+=s[i];
        //    }
        //    else{       
        //        rev.push_back(rem);
        //        rem.erase();
        //    }
        //}
        //reverse(rev.begin(),rev.end());
        //string ans="";
        //for(int i=0;i<rev.size();i++)
        //{
        //    ans+=rev[i]+' ';
        //}
        //return ans;
        int left=s.size();
        int right=s.size()-1;
        string ans="";
        string rem="";
        while(right>=0)
        {
            if(s[right]!=' ')
            {
                rem+=s[right];
            }
            else{
                
                reverse(rem.begin(),rem.end());
                rem=rem+' ';
                ans+=rem;
                rem="";
            }
            right--;
        }
        reverse(rem.begin(),rem.end());
        ans+=rem;
        while (!ans.empty() && isspace(ans.front()))
           { ans.erase(ans.begin());}

        while (!ans.empty() && isspace(ans.back()))
            {ans.pop_back();
            }
        int scount=0;
        for(int i=0;i<ans.size()-1;i++)
        {   if(ans[i]==' '&&ans[i+1]==' ')
            {
                ans.erase(i+1,1);
                i--;
            }

        }
        return ans;
    }
};