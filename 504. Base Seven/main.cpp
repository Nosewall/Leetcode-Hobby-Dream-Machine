#include <iostream>
#include <string>

int main() {
    class Solution {
    public:
        std::string convertToBase7(int num) {
            std::string res="";
            bool neg=false;
            if(num==0)return "0";
            if(num<0){
                neg=true;
                num=-num;
            }
            while(num>0){
                int x=num%7;
                num/=7;
                res=to_string(x)+res;
            }
            if(neg)res="-"+res;
            return res;
        }
    };
    return 0;
}
