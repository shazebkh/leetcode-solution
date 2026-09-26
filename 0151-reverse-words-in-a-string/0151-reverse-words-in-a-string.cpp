class Solution {
public:
    string reverseWords(string s) {
        int right=s.size()-1;
        string ans="";
        string rem="";
        /*USING INDEX SLICING TO GET THE WORDS IN REVERSE IN A
            STRING*/
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
        /*THIS PARTS DEALS WITH THE EXCEPTION OF LAST WORD WHICH IS THE FIRST WORD OF NON REVERSED STRING*/
        reverse(rem.begin(),rem.end());
        ans+=rem;
        /*THIS PARTS DEALS WITH EXTRA SPACE AT FRONT*/
        while (!ans.empty() && isspace(ans.front()))
           { ans.erase(ans.begin());}
        /*THIS PART DEALS WITH EXTRA SPACES AT THE LAST OF STRING*/
        while (!ans.empty() && isspace(ans.back()))
            {ans.pop_back();
            }
        /*IT WILL DEAL WITH EXTRA MIDDLE SPACES*/
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