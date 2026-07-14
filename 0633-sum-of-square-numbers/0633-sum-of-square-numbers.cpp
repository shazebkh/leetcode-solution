class Solution {
public:
    bool judgeSquareSum(int c) {
        /*Key idea of solutiom is question it self
        The question is asking  whether a^2+b^2=c or not
        To solve you just need to simplify equation
        And solve for the range of a and b*/
        int left=0;
        int right;
        right=sqrt(c);
        long int sum;
        while(left<=right)
        {
            sum = (long long)left * left + (long long)right * right;
            //To prevent overflow for edge cases
            if(sum==c)
            {
                return true;
            }
            else if(sum>=c)
            {
                right--;
            }
            else
            {
                left++;
            }
            
        }
        return false;
    }
};