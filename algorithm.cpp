/*
* This is where all my CSC3003S practice solutions will be.
* I'll be using Java, C, c++ & Python - mostly java and python
*/

#include <iostream>
#include <queue>
#include <vector>


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
        // Use min heap. The top k smallets items will laways be at the top. 
        // That way, we remove the k-1 smallest elements and filanny return the element at the to -> k
        // Overall time complexity: O(nlogn)
        // create a min heap from n

        std::priority_queue<int, std::vector<int>, std::greater<int>> min_heap;


        for (auto i = 0; i < n.size(); i++) {
            min_heap.push(n[i]);
        }

        for (auto i = 0; i < k - 1; i++) {
            min_heap.pop();
        }

        return min_heap.top(); // returns the item at the top of the heap
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

    std::cout << algorihtm.indexOfFirstOccurance("aaaaaaaaaaaaaaaaaaaabaaa", "aaab") << std::endl;
    // std::cout << algorihtm.kthSmallestElement(n, 4) << std::endl;


    

    return 0;
}