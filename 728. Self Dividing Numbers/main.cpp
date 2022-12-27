class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> divisibleNumbers;
        for(int i = left; i <= right; i++){
            string s = to_string(i);
            for(int j = 0; j < s.length(); j++){
                int check = s[j] - 48;
                if(check == 0){
                    break;
                }
                if(i % check != 0){
                    break;
                } else if ( j == s.length() - 1){
                    divisibleNumbers.push_back(i);
                }
            }
        }
        return divisibleNumbers;
    }
};