class Solution {
public:
    int countBinarySubstrings(string s) {
        int res = 0;
        for (int i = 0, preL = 0, curL = 0; i < s.size(); ++i)
        {
            if (i && s[i] == s[i-1]) ++curL;
            else preL = curL, curL = 1;
            if (curL <= preL) res++;
        }
        return res;
    }
};