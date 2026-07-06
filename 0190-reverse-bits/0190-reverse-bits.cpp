class Solution {
public:
    int reverseBits(int n) {
        bitset<32> bit=n;
        string s=bit.to_string();
        reverse(s.begin(),s.end());
        bitset<32>bit1(s);
        int rev=bit1.to_ulong();
        return rev;
    }
};