class Solution(object):
    def countBits(self, n):
        """
        :type n: int
        :rtype: List[int]
        """
        #initialize the first bit
        tracker = [0]
        for i in range(1, n + 1):
            tracker.append(tracker[i >> 1] + i % 2)
        return tracker

