using namespace std;

class Solution {
public:
    int reverse(int x) {
        double res = 0;
        while (x != 0) {
            res += x % 10;
            x /= 10;
            res *= 10;
        }
        res /= 10;
        return res <= pow(2, 31) - 1 && res >= -pow(2, 31)   ? (int) res : 0;
    }
};