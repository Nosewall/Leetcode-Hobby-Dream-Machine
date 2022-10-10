class Solution(object):
    def firstUniqChar(self, s):
        chr_count = Counter(s)
        print(chr_count)
        for x in chr_count:
            if chr_count[x] == 1:
                return s.index(x)
        return -1
