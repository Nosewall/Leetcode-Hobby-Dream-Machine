import math
# The guess API is already defined for you.
# @param num, your guess
# @return -1 if num is higher than the picked number
#          1 if num is lower than the picked number
#          otherwise return 0
# def guess(num):

class Solution(object):
    def guessNumber(self, n):
        """
        :type n: int
        :rtype: int
        """
        # Binary search problem
        # Set low and high
        # Get middle number
        # if -1, take higher range and repeat
        # If 1, take lower range and repeat
        # Return when low == high
        low = 0
        high = math.pow(2, 32) - 1

        while low != high:
            middle = (high + low) / 2
            decision = self.guess(middle)
            if decision == 0:
                return middle
            elif decision == -1:
                low = middle + 1
                continue
            elif decision == 1:
                high = middle - 1
                continue
        return low


    def guess(self, num):
        real = 600
        if num > 600:
            return 1
        elif num < 600:
            return -1
        elif num == 600:
            return 0

sol = Solution()
print(sol.guessNumber(600))