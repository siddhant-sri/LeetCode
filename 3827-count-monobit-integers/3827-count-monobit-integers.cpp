class Solution {
public:
    int countMonobit(int n) {
      int count = 0;

        for (int i = 0; i <= n; i++) {
            if (i == 0 || ((i & (i + 1)) == 0)) {
                count++;
            }
        }
        return count;  
    }
};