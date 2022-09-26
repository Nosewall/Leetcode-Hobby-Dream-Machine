class Solution(object):
    def canWinNim(self, n):
        """
        :type n: int
        :rtype: bool
        """
        # This LOOKs like a minmax problem, but actually I can just check if it's divisible by 4.
        return bool(n % 4)


