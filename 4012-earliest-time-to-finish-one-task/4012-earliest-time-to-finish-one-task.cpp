class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int ans = INT_MAX;
        for(auto task: tasks){
            int time = task[0] + task[1];
            ans = min(ans, time);
        }
        return ans;
    }
};