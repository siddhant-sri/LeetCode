class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        map<int, int> freq;
        for(auto it: nums){
            freq[it]++;
        }
        vector<int> ans;
        bool remaining = true;

        while(remaining){
            remaining = false;
            for(auto &it: freq){
                if(it.second > 0){
                    ans.push_back(it.first);
                    it.second--;
                    remaining = true;
                }
            }
        }
        return ans;
    }
};