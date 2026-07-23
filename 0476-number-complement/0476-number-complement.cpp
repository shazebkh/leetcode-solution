class Solution {
public:
    int findComplement(int num) {
        if(num==1)
        {
            return 0;
        }
        bitset<32> n(num);
        string s=n.to_string();
        s.erase(0, s.find_first_not_of('0'));
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='0')
            {
                s[i]='1';
            }
            else
            {
                s[i]='0';
            }
        }
        bitset<32> res(s);
        long int ans=res.to_ulong();
        return ans;
    }
};