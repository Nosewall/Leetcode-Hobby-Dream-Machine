class Solution(object):
    def searchInsert(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        for i in range(len(nums)):
            if nums[i] < target:
                pass
            elif nums[i] == target:
                return i
            elif nums[i] > target:
                if i == 0:
                    return 0
                else:
                    return i

        return len(nums)





sol = Solution()
print(sol.searchInsert([1,3,5,6], 7))
