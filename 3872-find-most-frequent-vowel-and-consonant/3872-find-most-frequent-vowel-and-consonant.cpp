class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<int, int> mpp;
        int maxV = 0;
        int maxC = 0;
        string vowels = "aeiou";

        for(int i=0; i<s.size(); i++){
            mpp[s[i]]++;
        }

        for(auto it: mpp){
            char ch = it.first;
            int count = it.second;

            if(vowels.find(ch) != string::npos){
                maxV = max(maxV, count);
            }
            else{
                maxC = max(maxC, count);
            }
        }
        return maxV + maxC;
    }
};

