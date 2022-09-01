class Solution(object):
    def titleToNumber(self, columnTitle):
        """
        :type columnTitle: str
        :rtype: int
        """
        #Similar to the last base 26 number in reverse. I forgot this algorithm initially, but you multiply by the base and multiply that to the power of the position. Neat!
        ans, pos = 0, 0
        for letter in reversed(columnTitle):
            digit = ord(letter) - 64
            ans += digit * 26 ** pos
            pos += 1

        return ans

sol = Solution()
print(sol.titleToNumber("AB"))
