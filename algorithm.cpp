/*
* This is where all my CSC3003S practice solutions will be.
* I'll be using Java, C, c++ & Python - mostly java and python
*/

#include <iostream>
#include <queue>
#include <vector>
#include <stdint.h>

class Algorithm {
    private:
        // T* data;
        // unsigned int n;
        // std::string T;
        // std::string P;
    
    public:
        Algorithm(){};
        // Algorithm(unsigned int n) {
        //     this->n = n;
        // }

        // Algorithm(std::string T, std::string P) {
        //     this->T = T;
        //     this->P = P;
        // }
    uint32_t sqrt(uint32_t n) {
        // find the integer square root of any 32 bit number

        uint32_t low = 0;
        uint32_t high = 65535u; // max 32 bit integer square root

        while (low <= high) {
            uint32_t mid = low + (high - low)/2;

            if ((uint64_t) mid * mid  < n) {
                low = mid + 1;
                
            }

            if ((uint64_t) mid * mid > n) high = mid - 1; 
        }

        return high;
    }

    int indexOfFirstOccurance(std::string t, std::string p) {
        // give a string T, retunr the index of first ocurrance of string P in T. Return -1 if not found.

        // Brute force approach
        // seach for where t starts with p[0]
        // if found, iterate from p[1] to len(p) -1 and check if the chars match, if not, break out the loop
        // Time O(m * n)

        if (p.empty()) return 0;

        if (t.length() < p.length()) return -1;

        
        for (size_t i = 0; i <=  t.length() - p.length(); i++) {

            if (t[i] == p[0]) {
                size_t j = 0;

                while (j < p.length() && t[i + j] == p[j]) {
                    j++;
                }

                if (j == p.length() ) return i;

            }
        }

        return -1;
    }

    int kthSmallestElement(std::vector<int> n, unsigned int k) {
        // Overall time complexity: O(nlogk)

        std::priority_queue<int, std::vector<int>, std::less<int>> max_heap;

        for (auto i = 0; i < n.size(); i++) {
            max_heap.push(n[i]);
            if (max_heap.size() > k) max_heap.pop(); // remove largest element from the heap

        }

        return max_heap.top(); // returns the item at the top of the heap - the kth smallest item.
    }

    int countBits(unsigned int n) {
        // counting number of 1 bits in a number
        int count = 0;
        while (n != 0) {
            n &= (n - 1);
            count++;
        }

        return count;
    }
        
};

int  main (void) {
    unsigned int x = 10;
    std::vector<int> n = {1, 3, 5, 3, 5, 6, 8, 0};

    auto algorihtm = Algorithm();

    // std::cout << algorihtm.indexOfFirstOccurance("aaaaaaaaaaaaaaaaaaaabaaa", "aaab") << std::endl;
    std::cout << algorihtm.kthSmallestElement(n, 2) << std::endl;
    // std::cout << algorihtm.sqrt(10) << std::endl;



    

    return 0;
}