class Solution(object):
    def containsNearbyDuplicate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: bool
        """
        track = {}
        for i in range(len(nums)):
            if nums[i] in track:
                if abs(track[nums[i]] - i) <= k:
                    return True
                else:
                    track[nums[i]] = i
            else:
                track[nums[i]] = i

        return False

sol = Solution()
print(sol.containsNearbyDuplicate([1, 0, 1, 1], 1))