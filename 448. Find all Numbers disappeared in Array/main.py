class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        mapOfNums = set()
        for i in nums:
            if i not in mapOfNums:
                mapOfNums.add(i)
        missing = []
        for i in range(1, len(nums) + 1):
            if i not in mapOfNums:
                missing.append(i)
        return missing