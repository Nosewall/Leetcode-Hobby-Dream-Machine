class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        raw_string = ''.join(e for e in s if e.isalnum())
        raw_string = raw_string.lower()
        backwards_string = raw_string[::-1]
        print(raw_string)
        print(backwards_string)
        return backwards_string == raw_string

sol = Solution()
print(sol.isPalindrome("0P"))

