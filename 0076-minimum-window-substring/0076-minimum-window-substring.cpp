class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size();
        unordered_map<char, int> mpp;

        for (auto it: t){
            mpp[it]++;
        }

        int left = 0;
        int matched = 0;
        int reached = t.size();
        int minLen = INT_MAX;
        int startIndex = 0;
        
        for(int right=0; right<n; right++){
            if(mpp[s[right]] > 0){
                matched++;
            }
            mpp[s[right]]--;

            while(matched == reached){
                if(minLen > right-left+1){
                    minLen = min(minLen, right-left + 1);
                    startIndex = left;
                }
                mpp[s[left]]++;
                if(mpp[s[left]] > 0){
                    matched--;
                }
                left++;
            }
        }
        return minLen == INT_MAX ? "" : s.substr(startIndex, minLen);
    }
};