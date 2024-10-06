class Solution {
public:
    int minElement(vector<int>& nums) {
        int minSum = INT_MAX;
        for(int i=0; i<nums.size(); i++){
            int sum = 0;
            int num = nums[i];

            while(num > 0){
                sum += num % 10;
                num /= 10;
            }

            minSum = min(minSum, sum);
        }
        return minSum;
    }
};