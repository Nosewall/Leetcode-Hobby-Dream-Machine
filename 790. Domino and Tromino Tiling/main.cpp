class Solution {
public:
    int numTilings(int n) {
        if (n <= 2) return n;
        int mod = 1'000'000'007;
        long current = 5;
        long previous = 2;
        long prevprevious = 1;
        for(int i = 4; i < n + 1; i++){
            long temp = previous;
            previous = current;
            current = (2 * current + prevprevious) % mod;
            prevprevious = temp;
        }
        return current;
    }
};