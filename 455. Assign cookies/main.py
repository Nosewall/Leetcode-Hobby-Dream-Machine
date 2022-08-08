class Solution:
    def findContentChildren(self, g, s) -> int:
        g.sort()
        s.sort()

        i = 0
        j = 0
        happyKiddos = 0
        while i < len(s) and j < len(g):
            if g[j] <= s[i]:
                happyKiddos += 1
                j += 1
            i += 1

        return happyKiddos

