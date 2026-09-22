class Solution {
public:
    int reverseDegree(string s) {
        int ans = 0;

        for(int i=0; i<s.size(); i++){
            int alphabetPos = s[i] - 'a' + 1;
            int reversePos = 27 - alphabetPos;

            ans += reversePos * (i + 1);
        } 
        return ans;
    }
};