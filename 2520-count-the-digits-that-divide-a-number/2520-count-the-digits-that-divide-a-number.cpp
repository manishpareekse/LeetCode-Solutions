class Solution {
public:
    int countDigits(int n) {
        int last, count = 0, temp = n;
        while (n) {
            last = n % 10;
            if (temp % last == 0) {
                count++;
            }
            n /= 10;
        }
        return count;
    }
};