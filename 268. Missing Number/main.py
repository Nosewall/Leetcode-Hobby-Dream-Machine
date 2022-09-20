class Solution(object):
    def missingNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        complete = list(range(len(nums) - 1))
        return sum(complete) - sum(nums)


sol = Solution()
print(sol.missingNumber([0, 1]))
