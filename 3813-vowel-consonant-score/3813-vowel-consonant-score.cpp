class Solution {
public:
    int vowelConsonantScore(string s) {
        int v = 0,len = 0;
        string vowels = "aeiou";

        for(auto ch : s){
            if(isalpha(ch)){
                len++;
            }
            if(vowels.find(ch) != string::npos){
                v++;
            }
        }

        int c = len-v;
        return (c>0) ? v/c : 0;
    }
};