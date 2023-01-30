class Solution {
public:
    int tribonacci(int n) {
        int first = 0;
        int second = 1;
        int third = 1;
        int place = 3;
        if (n == 0) return 0;
        if (n == 1 || n == 2) return 1;
        while(place <= n){
            int next = first + second + third;
            place += 1;
            first = second;
            second = third;
            third = next;
        }
        return third;
    }
};