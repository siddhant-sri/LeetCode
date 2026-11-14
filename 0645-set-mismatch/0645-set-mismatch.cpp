class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int, int> mpp;
        vector<int> ans;
        int n = nums.size();
        int sum = 0;
        int ogSum = (n*(n+1))/2;


        for(auto it: nums){
            mpp[it]++;
            sum += it;
        }

        int duplicate = 0;

        for(auto it: mpp){
            if(it.second > 1){
                duplicate = it.first;
                ans.push_back(it.first);
            }
        }
        int missingNum = ogSum - sum + duplicate;
        ans.push_back(missingNum);

        return ans;
    }
};