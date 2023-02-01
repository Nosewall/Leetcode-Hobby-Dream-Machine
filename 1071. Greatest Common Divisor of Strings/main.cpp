class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int n1 = str1.size(), n2 = str2.size();
        string ans = "";

        for(int i = 0; i < n1; i++){
            string check = str1.substr(0, i + 1);
            int nCheck = check.size();
            bool tiling = true;
            for(int j = 0; j < n1; j += nCheck){
                if(j + nCheck >= n1 + 1){
                    tiling = false;
                    break;
                }
                string jCheck = str1.substr(j, nCheck);
                //Check if strings match
                if (jCheck.compare(check) != 0){
                    tiling = false;
                    break;
                }
            }
            for(int k = 0; k < n2; k += nCheck){
                if (k + nCheck >= n2 + 1){
                    tiling = false;
                    break;
                }
                string kCheck = str2.substr(k, nCheck);
                if(kCheck.compare(check) != 0){
                    tiling = false;
                    break;
                }
            }

            if(tiling){
                ans = check;
            }
        }

        return ans;
    }
};