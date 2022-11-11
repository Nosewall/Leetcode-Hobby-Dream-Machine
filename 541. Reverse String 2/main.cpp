class Solution {
public:
    string reverseStr(string s, int k) {

        for( size_t i=0;i<s.size();i+=k*2 ){
            if( i+k<=s.length() ){
                reverse(s.begin()+i,s.begin()+i+k);
            }else{
                reverse(s.begin()+i,s.end());
            }
        }

        return s;
    }
};
