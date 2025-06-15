class Solution {
public:
    int maxDifference(string s) {
        vector<int> freq(26, 0);
        int maxi = 0;
        int mini = s.size();

        // Count freq of characters
        for(auto c: s){
            freq[c - 'a']++;
        }

        // Maxi odd and Mini even
        for(auto cnt: freq){
            if(cnt % 2 != 0){
                maxi = max(maxi, cnt);
            } else if(cnt % 2 == 0 && cnt != 0){
                mini = min(mini, cnt);
            }
        }

        return maxi-mini;
    }
};