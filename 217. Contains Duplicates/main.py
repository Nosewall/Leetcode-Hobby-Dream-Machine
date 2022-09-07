class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        track = {}
        for i in range(len(nums)):
            if nums[i] in track:
                return True
            else:
                track[nums[i]] = True

        return False

    #I also really like the one line solution : return len(set(nums))<len(nums) Really clever

sol = Solution()
print(sol.containsDuplicate([1,2,3,1]))
