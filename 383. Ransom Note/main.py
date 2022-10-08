class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        """
        :type ransomNote: str
        :type magazine: str
        :rtype: bool
        """
        ransomDic = {}
        magDic = {}
        self.assignLettersToDict(ransomNote, ransomDic)
        self.assignLettersToDict(magazine, magDic)
        for key, value in ransomDic.items():
            if key not in magDic:
                return False
            if magDic[key] < value:
                return False
        return True

    def assignLettersToDict(self, note, dict):
        for i in note:
            if i in dict:
                dict[i] += 1
            else:
                dict[i] = 1