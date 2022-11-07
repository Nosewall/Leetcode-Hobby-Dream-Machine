#include <iostream>

class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num & 1) return false;
        else {
            int n = num/2;
            int sum = 0;
            for(int i=1; i<=n; i++) {
                if(num%i == 0) {
                    sum += i;
                }
            }

            if(sum == num) return true;
        }
        return false;
    }
};
