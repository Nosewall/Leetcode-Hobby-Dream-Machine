class Solution(object):
    def isPowerOfFour(self, n):
        """
        :type n: int
        :rtype: bool
        """
        count = 1
        while count < n:
            count = count * 4

        return count == n

