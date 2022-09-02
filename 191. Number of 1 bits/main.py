class Solution(object):
    def hammingWeight(self, n):
        """
        :type n: int
        :rtype: int
        """
        # First I turn the binary number into a binary String. I don't need the leading 0's for this question since I'm only counting 1's.
        # I do need to slice the leading 0b from the string though.
        # Then I just count the instances of 1 in the string.
        binary_string = (bin(n))[2:]
        return binary_string.count("1")


sol = Solution()
print(sol.hammingWeight(0b00101101))
