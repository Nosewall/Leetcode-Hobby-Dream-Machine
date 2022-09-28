class Solution(object):
    def isPowerOfThree(self, n):
        """
        :type n: int
        :rtype: bool
        """
        x = 1
        while x <= n:
            if x != n:
                x = x * 3
            else:
                return True
        return False
