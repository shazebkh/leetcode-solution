class Solution {
public:
    int reverseBits(int n) {
        bitset<32> bit=n;//Convert int and binary strings to bits
        string s=bit.to_string();//saved it into string to reverse the bits 
        reverse(s.begin(),s.end());
        bitset<32>bit1(s);//convert string into bits
        int rev=bit1.to_ulong();//converted bits into integer
        return rev;
    }
};
