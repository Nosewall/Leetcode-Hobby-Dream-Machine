class Solution:
    def thirdMax(self, nums):
        intMap = set()
        for i in nums:
            if i in intMap:
                continue
            else:
                intMap.add(i)
        intMap = list(intMap)
        list.sort(intMap)
        return intMap[-3]

sol = Solution()
sol.thirdMax([1,2,3,213,3,4,4,5,6,6,6,0, 6,7,-20,7,78,8,])
