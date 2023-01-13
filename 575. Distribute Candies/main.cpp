#include <any>
#include <windows.h>
#include <vector>
#include "unordered_map"
#include "minmax.h"

class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int,int> mp;

        for (auto i : candyType){
            mp[i]++;
        }

        int size = candyType.size();
        int m = mp.size();
        return min( size/2, m);
    }
};