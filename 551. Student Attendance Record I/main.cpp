class Solution {
public:
    bool checkRecord(string s) {
        int longestLateStreak = 0;
        int numberOfAbsences = 0;
        for (int i = 0; i < s.length(); i++){
            if (s[i] == 'A'){
                numberOfAbsences += 1;
                if (numberOfAbsences >= 2){
                    return 0;
                }
            }

            if(s[i] == 'L'){
                longestLateStreak += 1;
                if(longestLateStreak >= 3){
                    return 0;
                }
            } else {
                longestLateStreak = 0;
            }
        }

        return 1;
    }
};