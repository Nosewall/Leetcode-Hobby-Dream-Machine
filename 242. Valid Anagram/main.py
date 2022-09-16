class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        mapped_s = self.assign_String_to_dictionary(s)
        mapped_t = self.assign_String_to_dictionary(t)

        for i in mapped_s:
            if i not in mapped_t:
                return False
            if mapped_t[i] != mapped_s[i]:
                return False

        for i in mapped_t:
            if i not in mapped_s:
                return False
            if mapped_t[i] != mapped_s[i]:
                return False

        return True

    def assign_String_to_dictionary(self, string_to_convert):
        dictionary = {}
        for i in string_to_convert:
            if i in dictionary:
                dictionary[i] += 1
            else:
                dictionary[i] = 1
        return dictionary
