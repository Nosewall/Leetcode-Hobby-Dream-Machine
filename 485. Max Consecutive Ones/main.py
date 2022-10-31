class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        longestStreak = 0
        currentStreak = 0
        for i in nums:
            if i == 1:
                currentStreak += 1
                if currentStreak > longestStreak:
                    longestStreak = currentStreak
            elif i == 0:
                currentStreak = 0

        return longestStreak
