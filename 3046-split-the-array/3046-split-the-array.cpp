class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for(auto it : nums){
            mpp[it]++;
        }

        for(auto it : mpp){
            if(it.second > 2) return false;
        }
        return true;
    }
};