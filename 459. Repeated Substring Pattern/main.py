class Solution:
    def repeatedSubstringPattern(self, s: str) -> bool:
        pattern = ""
        for i in s:
            pattern += i
            p = pattern
            if len(p) > (len(s) // 2):
                return False
            while len(p) <= len(s):
                if p == s:
                    return True
                p += pattern
        return False

sol = Solution()
print(sol.repeatedSubstringPattern("abab"))
