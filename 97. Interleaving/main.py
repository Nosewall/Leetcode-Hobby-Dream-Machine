class Solution(object):
    def isInterleave(self, s1, s2, s3):
        """
        :type s1: str
        :type s2: str
        :type s3: str
        :rtype: bool
        """

        s1Index = 0
        s2Index = 0
        solution = True
        for idx, x in enumerate(s3):
            if s3[idx] is not s1[s1Index] and s3[idx] is not s2[s2Index]:
                return False
            if s3[idx] == s1[s1Index] and s1Index < len(s1) - 1:
                s1Index = s1Index + 1
            elif s3[idx] == s2[s2Index] and s2Index < len(s2) - 1:
                s2Index = s2Index + 1

        return solution



sol = Solution()
print(sol.isInterleave("aabcc", "dbbca", "aadbbcbcac"))