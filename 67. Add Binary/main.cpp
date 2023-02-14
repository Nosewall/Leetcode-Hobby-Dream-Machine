class Solution {
public:
    int sum_funct(int a,int b){
        if (a==1 && b==1)return 10;
        return a+b;
    }
    string addBinary(string a, string b) {
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        string ans;
        int n= a.size(); int m= b.size();
        int i=0; int j=0;
        int carry=0;
        while (i<n && j<m){
            int sum= sum_funct(a[i]-'0',b[j]-'0');
            sum= sum_funct(sum,carry);
            carry= sum/10;
            ans+= (sum%10)+'0';
            i++; j++;
        }
        while (i<n){
            int sum= sum_funct(a[i]-'0',carry);
            carry= sum/10;
            ans+= (sum%10)+'0';
            i++;
        }
        while (j<m){
            int sum= sum_funct(carry,b[j]-'0');
            carry= sum/10;
            ans+= (sum%10)+'0';
            j++;
        }
        if (carry==1)ans+= '1';
        reverse(ans.begin(),ans.end());
        return ans;
    }
};