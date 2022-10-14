class Solution:
    def arrangeCoins(self, n: int) -> int:
        rows = 0
        nextRow = 1
        while nextRow <= n:
            n -= nextRow
            nextRow += 1
            if n >= 0:
                rows += 1
        return rows