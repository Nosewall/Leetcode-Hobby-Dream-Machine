class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        if len(t) < len(s):
            return False

        if len(s) == 0:
            return True

        matches = 0
        for i in t:
            if i == s[matches]:
                matches += 1
                if matches == len(s):
                    break

        return matches == len(s)


sol = Solution()
print(sol.isSubsequence("b", "abc"))
