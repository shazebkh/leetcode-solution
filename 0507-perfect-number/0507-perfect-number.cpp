class Solution {
public:
    bool checkPerfectNumber(int num) {
       long int sum=0;
       int left=1;
       int right=num;
       while(left<right)
       {
            if(num%left==0)
            {
                sum=sum+left;
            }
            else if(num%right==0){
                sum=sum+right;
            }
            left++;
            right--;
       }
       if(sum==num)
       {
        return true;
       }
       return false; 
    }
};