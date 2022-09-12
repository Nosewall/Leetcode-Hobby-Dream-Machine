class Solution(object):
    def summaryRanges(self, nums):
        """
        :type nums: List[int]
        :rtype: List[str]
        """
        listOfRanges = []
        num1 = None
        previous = None
        for i in range(len(nums)):
            if num1 is None:
                num1 = nums[i]
                previous = nums[i]
            elif i != len(nums) - 1 and nums[i] == previous + 1:
                previous = nums[i]
                continue
            elif nums[i] != previous + 1:
                listOfRanges.append(self.createRange(num1, previous))
                num1 = nums[i]
                previous = nums[i]
            if i == len(nums) - 1:
                listOfRanges.append(self.createRange(num1, nums[i]))

        return listOfRanges



    def createRange(self, num1, num2):
        if num1 != num2:
            range = str(num1) + "->" + str(num2)
        else:
            range = str(num1)
        return range

sol = Solution()
print(sol.summaryRanges([0]))