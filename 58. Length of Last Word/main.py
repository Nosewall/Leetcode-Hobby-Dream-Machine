class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        split_string = s.split(" ")
        #Remove all empty strings
        index = 0
        for i in range(len(split_string)):
            if len(split_string[index]) == 0:
                split_string.pop(index)
            else:
                index += 1


        return len(split_string[len(split_string) - 1])


sol = Solution()
print(sol.lengthOfLastWord("   fly me   to   the moon  "))
