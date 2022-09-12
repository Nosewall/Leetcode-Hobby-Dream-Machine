class Solution(object):
    def isPowerOfTwo(self, n):
        """
        :type n: int
        :rtype: bool
        """
        while n > 1:
            n = n/2
        return n == 1

sol = Solution()
print(sol.isPowerOfTwo(3))
