class Solution {
public:
    bool validPalindrome(string s) {
        return validPal(s, 0, s.size() - 1);
    }

    bool validPal(string &s, int i, int j, bool usedSkip = false) {
        for(; i < j; i++, j--)
            if(s[i] != s[j])
                return usedSkip ? false : validPal(s, i + 1, j, true) || validPal(s, i, j - 1, true);
        return true;
    }
};