# The isBadVersion API is already defined for you.
# @param version, an integer
# @return a bool
# def isBadVersion(version):

class Solution(object):
    def firstBadVersion(self, n):
        """
        :type n: int
        :rtype: int
        """
        start = 0
        end = n
        while start<end:
            mid = (start + end)//2
            if isBadVersion(mid):
                end = mid
            else:
                start = mid+1
        return end




