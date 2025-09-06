class Solution {
public:
    int findClosest(int x, int y, int z) {
        int x_to_z = abs(z-x);
        int y_to_z = abs(z-y);

        if(x_to_z < y_to_z)   return 1;
        else if(y_to_z < x_to_z) return 2;

        return 0;
    }
};