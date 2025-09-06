class Solution {
public:
    int getLeastFrequentDigit(int n) {
        unordered_map<int,int> mpp;

        while(n>0){
            int rem = n % 10;
            mpp[rem]++;
            n /= 10;
        }

        int minFreq = INT_MAX;
        int ansDigit = INT_MAX;

        for(auto it: mpp){
            if(it.second < minFreq){
                minFreq = it.second;
                ansDigit = it.first;
            }
            else if(it.second == minFreq){
                ansDigit = min(ansDigit, it.first);
            }
        }
        return ansDigit;
    }
};