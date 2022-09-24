class Solution(object):
    def wordPattern(self, pattern, s):
        """
        :type pattern: str
        :type s: str
        :rtype: bool
        """
        arrOfWords = s.split(' ')
        dictOfPatternLetters = {}
        if len(pattern) != len(arrOfWords):
            return False
        for i in range(len(arrOfWords)):
            if arrOfWords[i] in dictOfPatternLetters:
                if dictOfPatternLetters[arrOfWords[i]] != pattern[i]:
                    return False
            elif pattern[i] not in dictOfPatternLetters.values():
                dictOfPatternLetters[arrOfWords[i]] = pattern[i]
            else:
                return False

        return True


sol = Solution()
print(sol.wordPattern("e", "aa aa aa aa"))