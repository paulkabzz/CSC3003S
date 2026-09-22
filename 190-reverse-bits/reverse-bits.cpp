class Solution {
public:
    int reverseBits(int n) {
        // 10 = 1010
        // 10 % 2 = 0 --
        // 10 / 2 = 5
        // 5 % 2 = 1 --
        // 5 / 2 = 2
        // 2 % 2 = 0 --
        // 2 / 2 = 1
        // 1 % 2 = 1 --
        // 1 / 2 = 0

        int idx =  31; //static_cast<int>(std::ceil(log(n)/log(2)));

        int res = 0;
        do {
            int bit = (n % 2);

            res += (bit * std::pow(2, idx--));
            n /= 2;
        } while ( n != 0);
        return res;
    }
};