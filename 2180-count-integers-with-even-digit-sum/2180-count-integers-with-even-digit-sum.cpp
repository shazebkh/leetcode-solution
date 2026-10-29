class Solution {
public:
    int countEven(int num) {
        int count=0;
        for(int i=1;i<=num;i++){
            int rem=0,temp=i;
            while(temp>0){
                rem+=temp%10;
                temp/=10;
            }
            if(rem%2==0){
                count++;
            }
        }
        return count;
    }
};