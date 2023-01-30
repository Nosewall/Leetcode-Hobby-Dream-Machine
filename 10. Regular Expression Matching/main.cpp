class Solution {
public:
    bool isMatch(string s, string p) {
        int pn=p.size(), sn = s.size();
        vector<vector<bool>> dp(sn+1,vector<bool>(pn+1));
        dp[sn][pn] = 1;
        for(int i = sn;i>=0;i--)
            for(int j=pn-1;j>=0;j--)
                if(p[j+1]=='*')
                    dp[i][j] = dp[i][j+2] || i<sn && (p[j] == '.' || s[i] == p[j]) && dp[i+1][j];
                else dp[i][j] = i<sn && (p[j]=='.'|| s[i]==p[j]) && dp[i+1][j+1];
        return dp[0][0];
    }
};