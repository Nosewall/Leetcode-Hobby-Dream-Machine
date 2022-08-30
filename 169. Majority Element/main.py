class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if len(nums) == 1:
            return nums[0]
        counter = {}
        majority = (len(nums) // 2) + 1
        for i in range(len(nums)):
            if nums[i] in counter.keys():
                counter[nums[i]] += 1
                if counter[nums[i]] >= majority:
                    return nums[i]
            else:
                counter[nums[i]] = 1

        return None

sol = Solution()
print(sol.majorityElement([1]))

