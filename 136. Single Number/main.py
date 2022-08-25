class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        tracker = []
        for i in range(len(nums)):
            if self.contains(tracker, nums[i]):
                tracker.remove(nums[i])
            else:
                tracker.append(nums[i])

        return tracker[0]

    def contains(self, arr, int):
        for i in range(len(arr)):
            if arr[i] == int:
                return True

        return False


sol = Solution()
print(sol.singleNumber([1,1,2,3,4,3,2]))


