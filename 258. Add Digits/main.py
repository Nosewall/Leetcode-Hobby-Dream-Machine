class Solution(object):
    def addDigits(self, num):
        """
        :type num: int
        :rtype: int
        """
        while len(str(num)) > 1:
            total = 0
            for i in range(len(str(num))):
                total += int(str(num)[i])
            num = total

        return num
