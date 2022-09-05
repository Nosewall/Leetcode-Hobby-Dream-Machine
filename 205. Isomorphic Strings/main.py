class Solution(object):
    def isIsomorphic(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        usedLetters = {}
        if len(s) != len(t):
            return False

        for i in range(len(s)):
            if s[i] not in usedLetters and t[i] not in usedLetters.values():
                usedLetters[s[i]] = t[i]
            elif s[i] not in usedLetters:
                return False
            elif usedLetters[s[i]] != t[i]:
                return False

        return True

sol = Solution()
print(sol.isIsomorphic("badc", "baba"))

