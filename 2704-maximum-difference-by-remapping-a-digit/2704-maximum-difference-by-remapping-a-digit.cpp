class Solution {
public:
    int minMaxDifference(int num) {
        string str_num = to_string(num);
        string maxStr = "";
        string minStr = "";
        char ch;

        // Max number in string
        for (int i=0; i<str_num.length(); i++){
            if(str_num[i] != '9'){
                ch = str_num[i]; 
                break;
            }  
        }
        for(int i=0; i<str_num.length(); i++){
            if(str_num[i] == ch){
                maxStr += '9';
            } else {
                maxStr += str_num[i];               
            }
        }

        // Min number in string
        ch = str_num[0];
        for(int i=0; i<str_num.length(); i++){
            if(str_num[i] == ch){
                minStr += '0';
            } else {
                minStr += str_num[i];               
            }
        }

        return stoi(maxStr) - stoi(minStr);
    }
};