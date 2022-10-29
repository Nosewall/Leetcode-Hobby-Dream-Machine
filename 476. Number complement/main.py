class Solution:
    def findComplement(self, num: int) -> int:
        s=bin(num).replace('0b','')
        t=''
        for i in s:
            if i=='0':
                t+='1'
            else:
                t+='0'
        return int(t,2)
