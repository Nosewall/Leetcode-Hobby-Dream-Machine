class Solution:
    def licenseKeyFormatting(self, s: str, k: int) -> str:
        s = s.replace('-', '')
        l=len(s)
        for i in range(l-1,0,-1):
            if((l-i)%k==0 ):
                s=s[:i]+'-'+s[i:]
        return s.upper()
