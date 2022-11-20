class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int,int> mp;

        for (auto i : candyType){
            mp[i]++;
        }

        int size = candyType.size();
        int m = mp.size();
        return min( siz/2, m);
    }
};