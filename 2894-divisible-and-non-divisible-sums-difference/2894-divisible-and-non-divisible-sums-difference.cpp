class Solution {
public:
    int differenceOfSums(int n, int m) {
      int divisible=0;
      int notDivisible=0;
      for(int i=1;i<=n;i++){
        if(i%m==0){
            divisible=divisible+i;
        }
        else{
            notDivisible+=i;
        }
      }
      cout<<divisible<<" and "<<notDivisible;
      return notDivisible-divisible;  
    }
};