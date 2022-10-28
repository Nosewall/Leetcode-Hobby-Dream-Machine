class Solution:
    def islandPerimeter(self, I: List[List[int]]) -> int:
        m, n = len(I), len(I[0])
        P = 0

        for i in range(m):
            for j in range(n):
                if I[i][j]:
                    P += 4
                    if i > 0 and I[i - 1][j]:
                        P -= 2
                    if j > 0 and I[i][j - 1]:
                        P -= 2
        return P