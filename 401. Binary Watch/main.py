class Solution:
    def readBinaryWatch(self, turnedOn: int) -> List[str]:
        if turnedOn > 9 or turnedOn < 0:
            return []
        ans = []
        num2bits = [bin(i).count("1") for i in range(60)] # This is so smart
        for h in range(12):
            hb = num2bits[h]
            for m in range(60):
                mb = num2bits[m]
                if hb + mb == turnedOn:
                    ans.append(f"{h}:{m:02d}")
        return ans
