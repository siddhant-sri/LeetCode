class Solution {
public:
    int numberOfChild(int n, int k) {
        int N = 2*(n-1), x = k % N;
        return (x<n) ? x : N - x;
    }
};