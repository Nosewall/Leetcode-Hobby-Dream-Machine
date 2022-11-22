//
// Created by Nolan on 11/21/2022.
//

#include "main.h"
class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (auto n : nums)
            freq[n]++;

        int max = 0;
        for (auto [num, f] : freq){
            if (freq.find(num+1) != freq.end())
                max = max(max, f + freq[num + 1]);
        }
        return max;
    }
};