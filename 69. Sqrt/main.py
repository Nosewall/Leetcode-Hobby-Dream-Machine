class Solution(object):
    def mySqrt(self, x):
        low = 0
        high = x
        while low <= high:
            #The double slash operator gives you the result of a division operation as a whole number
            middle = (high + low) // 2
            sqr = middle * middle

            if sqr == x:
                return middle
            elif sqr < x:
                low = middle + 1
            else:
                high = middle - 1

        return high


sol = Solution()
print(sol.mySqrt(8))
#nice