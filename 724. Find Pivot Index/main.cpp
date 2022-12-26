class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        for (int i = 0, leftSum = 0; i < nums.size(); leftSum += nums[i++])
            if (2*leftSum == sum - nums[i]) return i;

        return -1;
    }
};