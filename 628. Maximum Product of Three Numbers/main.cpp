class Solution {
public:
    int maximumProduct(vector<int>& nums) {

        // Answer is either made up of two negative number and a positive number
        // or three positive numbers. We can isolate these 5 numbers of interest in O(1)
        // time with a sorted array.

        sort(nums.begin(), nums.end()); // n log(n) time complexity
        return max(nums[0] * nums[1] * nums[nums.size() - 1], nums[nums.size() - 3] * nums[nums.size() - 2] * nums[nums.size() - 1]);
    }
};