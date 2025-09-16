class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int l=0, r=0, maxlen=0;
        int hash[256];
        for(int i = 0; i < 256; ++i) hash[i] = -1;

        while(r < n){
            if(hash[s[r]] != -1){
                if(hash[s[r]] >= l){  // Chk if it is in searching space
                    l = hash[s[r]] + 1; // shift l to previously found index +1
                }
            }
            int len = r-l+1;
            maxlen = max(maxlen, len);
            hash[s[r]] = r; // Update index
            r++;
        }
        return maxlen;
    }
};