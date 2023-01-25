class Solution {
public:
    bool prime (int x)
    {
        bool flag = false ;
        if(x==1) return false;
        for(int i =2 ; i < x ; i++)
        {
            if(x % i ==0 ){flag=true;break;}
        }
        if(flag)return false;
        return true;
    }
    string convert(int x)
    {
        string ans="";
        while( x > 0)
        {
            if(x % 2 == 0){ans+="0";}
            else {ans+='1';}
            x/=2;
        }
        return ans;
    }
    int countone(string s)
    {
        int count=0;
        for(int  i= 0 ;i < s.size();i++)
        {
            if(s[i] == '1'){count++;}
        }
        return count;
    }
    int countPrimeSetBits(int left, int right) {
        int ans=0;
        for(int i = left ;i <= right ;i++)
        {
            int x = countone(convert(i));

            if(prime(x)==true){ans++;}
        }
        return  ans;
    }
};