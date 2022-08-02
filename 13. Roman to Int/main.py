class Solution():
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        length = len(s)
        index = 0
        total = 0

        while index < length:
            nextChar = s[index]
            total = total + self.getValueOfS(nextChar)
            index = index + 1

        if length == 1:
            return total

        total_to_subtract = 0
        previousChar = s[0]
        index = 1
        while index < length:
            currentChar = s[index]
            if (currentChar == 'V' or currentChar == 'X') and previousChar == 'I':
                total_to_subtract = total_to_subtract + 2
            if (currentChar == 'L' or currentChar == 'C') and previousChar == 'X':
                total_to_subtract = total_to_subtract + 20
            if (currentChar == 'D' or currentChar == 'M') and previousChar == 'C':
                total_to_subtract = total_to_subtract + 200
            index = index + 1
            previousChar = currentChar

        total = total - total_to_subtract
        return total



    def getValueOfS(self, s):
        if (s == "I"):
            return 1
        if (s == "V"):
            return 5
        if (s == "X"):
            return 10
        if (s == "L"):
            return 50
        if (s == "C"):
            return 100
        if (s == "D"):
            return 500
        if (s == "M"):
            return 1000

sol = Solution()
print(sol.romanToInt("LVIII"))
