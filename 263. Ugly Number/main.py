class Solution(object):
    def isUgly(self, n):
        """
        :type n: int
        :rtype: bool
        """

        while n > 1:
            if n % 2 == 0:
                n = n / 2
            elif n % 3 == 0:
                n = n / 3
            elif n % 5 == 0:
                n = n / 5
            else:
                return False

        return n == 1


sol = Solution()
print(sol.isUgly(14))
