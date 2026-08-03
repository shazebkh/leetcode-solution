class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0)
        {
            return 1;
        }
        bitset<32> bit(n);
        string s=bit.to_string();
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
        long ans=res.to_ulong();
        return ans;
        
    }
};