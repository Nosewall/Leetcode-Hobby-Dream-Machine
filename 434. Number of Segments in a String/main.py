class Solution:
    def countSegments(self, s: str) -> int:
        l = s.strip().split(" ")
        l = list(filter(("").__ne__, l))

        return len(l)
