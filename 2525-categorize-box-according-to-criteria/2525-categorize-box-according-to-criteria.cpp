class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
       long long volume=(1LL*length)*(1LL*width)*(1LL*height);
        if((volume>=pow(10,9)||length>=10000||width>=10000||height>=10000)&&mass>=100){
            return "Both";
        }
        else if((volume>=pow(10,9)||length>=10000||width>=10000||height>=10000)&&mass<100){
            return "Bulky";
        }else if(volume<pow(10,9)&&mass<100){
            return "Neither";
        }
        else{
            return "Heavy";
        }
    }
};