class Solution {
public:
    bool canAliceWin(int n) {
        int i=10;
        while(n>0){
            if(n>=i){
                n=n-i;
                i--;
            }
            else{
                break;
            }
        }
        if(i%2==0){
            return false;
        }
        return true;
    }
};