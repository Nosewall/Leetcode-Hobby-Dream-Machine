class Solution(object):
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """
        for i in range(len(digits) - 1, -1, -1):
            index = i
            if digits[index] == 9:
                digits[index] = 0
                if index == 0:
                    digits.insert(0, 1)
                    return digits
            else:
                digits[index] = digits[index] + 1
                return digits


sol = Solution()
print(sol.plusOne([9, 9, 9, 9]))
print(sol.plusOne([1]))
print(sol.plusOne([7,4,5,6,4]))

