class Solution {
public:
    bool isPerfectSquare(int num) {
    double a=pow(num,0.5);
    int sq=int(a);
    if(a==sq&&num/sq==sq)
    {
        return true;
    }  
      return false;
        
    }
};