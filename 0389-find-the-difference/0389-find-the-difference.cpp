class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> mpp;
        char ans;
        
        for(auto it: s){
            mpp[it]++;
        }

        for(auto it: t){
            if(mpp[it] == 0){
                ans = it;
            }
            mpp[it]--;
        }
        return ans;
    }
};