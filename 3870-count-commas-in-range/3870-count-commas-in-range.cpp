class Solution {
public:
    int countCommas(int n) {
        // last - first + 1
        // comma starting from 1000
        // max constraints: 100000 (can only have one comma)
        return n > 999 ? (n - 1000 + 1) : 0;
    }
};