class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        bitset<32> num(n);
        string s=num.to_string();
        int left=0;
        int right=s.size();
        while(left<=right)
        {
            if(s[left]!=s[right])
            {
                return false;
            }
            left++;
            right--;
        }
        return true;

    }
};