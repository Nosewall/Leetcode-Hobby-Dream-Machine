class Solution:
    def longestPalindrome(self, s: str) -> int:
        map = set()

        doubles = 0
        for i in s:
            if i in map:
                doubles += 1
                map.remove(i)
            else:
                map.add(i)
        if len(map) == 0:
            return doubles * 2
        else:
            return (doubles * 2) + 1