class Solution:
    def findPoisonedDuration(self, timeSeries, duration) -> int:
        totalDur = 0
        for i in range(len(timeSeries)):
            totalDur += duration
            if i != 0 and timeSeries[i] - timeSeries[i - 1] <= duration - 1:
                totalDur -= duration - (timeSeries[i] - timeSeries[i - 1])

        return totalDur


sol = Solution()
print (sol.findPoisonedDuration([1, 2], 2))
print (sol.findPoisonedDuration([1, 4], 2))

