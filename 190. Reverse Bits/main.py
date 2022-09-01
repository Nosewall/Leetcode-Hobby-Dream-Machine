class Solution:
    # @param n, an integer
    # @return an integer
    def reverseBits(self, n):
        #Convert Integer to String
        #Reverse String
        #Convert to int in base 2
        #Fill in extra 0's with the zfill methon as a 32 bit integer
        return int(str((bin(n)[2:]).zfill(32)[::-1]), 2)

sol = Solution()
print(sol.reverseBits(0b00000010100101000001111010011100))
