class Solution {
public:
    int passwordStrength(string password) {
        long int sum=0;
        unordered_map <char,int> freq;
        //Hash table to store the freq of every character
        for(char ch:password)
        {
            freq[ch]++;
        }
        //Now that we know every character is stored with it's freq
        //so need not to check for duplicate character
        //here .first used to acces key like dictionaries in python        
        for(auto ch:freq)
        {
            if(ch.first>='a'&&ch.first<='z')
            {
                sum+=1;
            }
            else if(ch.first>='A'&&ch.first<='Z')
            {
                sum+=2;
            }
            else if(ch.first>='0'&&ch.first<='9')
            {
                sum+=3;
            }
            else
            {
                sum+=5;
            }
        }
        return sum; 
    }
};
