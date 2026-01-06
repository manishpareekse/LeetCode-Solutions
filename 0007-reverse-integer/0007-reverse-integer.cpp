class Solution {
public:
    int reverse(int n) {
        long sum = 0;
        long temp = n;
        long last;
        while (temp) {
            last = temp % 10;
            sum = sum * 10 + last;
            temp /= 10;
        }
        if (sum > INT_MAX || sum < INT_MIN) {
            return 0;
        }
        return sum;
    }
};