class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int k, y = 0;
        int n = jewels.size();
        for (int i = 0; i <n; i++) {
            k = count (stones.begin(), stones.end(), jewels[i]);
            y += k;
        }
        return y;
    }
};