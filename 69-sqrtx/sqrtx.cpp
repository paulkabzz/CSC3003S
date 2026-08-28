class Solution {
public:
    int mySqrt(int x) {
        uint32_t low = 0u;
        uint32_t high = 65535; // max squaroot value for 32bit int

        // binary search approach
        while (low <= high) 
        {
            uint32_t mid = low  + (high - low)/2u;

            if (x >= mid*mid) {
                low = mid+1u;
            } else {
                high = mid - 1u;
            }

        }

        return (int) high;

        
    }
};