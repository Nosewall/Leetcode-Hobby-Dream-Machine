class Solution(object):
    def isHappy(self, n):
        """
        :type n: int
        :rtype: bool
        """
        if n == 1:
            return True
        #Keeping track of the totals will allow us to check if we've entered a loop
        totals = []
        totals.append(n)
        while n != 1:
            #Convert to string, break into characters, and then back to an int for the quick maths
            str_n = str(n)
            new_total = 0
            for i in range(len(str_n)):
                new_total += (int(str_n[i]) *int(str_n[i]))
            #Now check if it's in the total already. If not, continue, if it is, break, if 1, return True
            if new_total == 1 :
                return True
            if new_total in totals:
                return False
            totals.append(new_total)
            n = new_total

sol = Solution()
print(sol.isHappy(19))







