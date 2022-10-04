class Solution:
    def reverseVowels(self, s):
        stack=[]
        res=""
        vowel=['a','e','i','o','u','A','E','I','O','U']
        for char in s:
            if char in vowel:
                stack.append(char)
        for char in s:
            if char in vowel:
                res+=stack.pop()
            else:
                res+=char
        return res
