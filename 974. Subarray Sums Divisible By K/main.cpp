// class Solution {
// public:
//     int subarraysDivByK(vector<int>& nums, int k) {
//     int numberOfDivisibleSubarrays = 0;
//         for(int i = 0; i < nums.size(); i++){
//             for(int j = i; j < nums.size(); j++){
//                 int arraySum = 0;
//                 for(int l = i; l <= j; l++){
//                     arraySum += nums[l];
//                 }
//                 if (arraySum % k == 0){
//                     numberOfDivisibleSubarrays += 1;
//                 }
//             }
//         }
//         return numberOfDivisibleSubarrays;
//     }
// };

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        int prefixMod = 0, result = 0;

        // There are k mod groups 0...k-1.
        vector<int> modGroups(k);
        modGroups[0] = 1;

        for (int num : nums) {
            // Take modulo twice to avoid negative remainders.
            prefixMod = (prefixMod + num % k + k) % k;
            // Add the count of subarrays that have the same remainder as the current
            // one to cancel out the remainders.
            result += modGroups[prefixMod];
            modGroups[prefixMod]++;
        }

        return result;
    }
};