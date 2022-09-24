class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        for i in nums:
            if i == 0:
                # O(N) Time. This solution works because the solution is based on the value of each element
                # and doesn't care that I'm creating a copy. If I wanted to move the element instead, I suppose that
                # I could just move teh variable in the same way.
                nums.remove(i)
                nums.append(0)