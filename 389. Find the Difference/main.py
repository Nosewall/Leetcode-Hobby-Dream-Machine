class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        ds = {}

        for i in range(len(s)):
            ds[s[i]] = 1 + ds.get(s[i], 0)

        dt = {}
        for i in range(len(t)):
            dt[t[i]] = 1 + dt.get(t[i], 0)

        for char in t:
            if char not in ds or dt[char] != ds[char]:
                return char