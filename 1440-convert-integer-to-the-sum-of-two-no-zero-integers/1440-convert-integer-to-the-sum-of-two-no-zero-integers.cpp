class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {

        for(int i=1; i<n; i++){
            int a = i;
            int b = n - i;

            if(!containsZero(a) && !containsZero(b)){
                return {a, b};
            }
        }
        return {-1,-1};
    }

    bool containsZero(int n){
        while(n>0){    
            if(n%10 == 0){
                return true;
            }
            n /= 10;
        }
        return false;
    }
};