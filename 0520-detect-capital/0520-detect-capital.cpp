class Solution {
public:
    bool detectCapitalUse(string word) {
        //if(word.size()==1)
        //{
        //    return true;
        //}
        int count=0;
        for(char ch:word)
        {
            if(ch>=65&&ch<=90)
            {
                count++;
            }
        }
        if(count==word.size()||(count==1&&(word[0]>=65&&word[0]<=90))||count==0)
        {
            return true;
        }
        
        return false;
    }
};