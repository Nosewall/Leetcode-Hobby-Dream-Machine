class Solution(object):
    def convertToTitle(self, columnNumber):
        """
        :type columnNumber: int
        :rtype: str
        """
        string = ""
        while columnNumber > 0:
            columnNumber -= 1
            string = chr(columnNumber % 26 + 65) + string
            columnNumber //= 26

        return string



sol = Solution()
print(sol.convertToTitle(999))
