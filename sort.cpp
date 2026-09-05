#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

class Sort {
    // we'll have:
    // Bubble Sort, Mergee Sort, Heap Sort, Topological Sort, Quick Sort, Selection Sort, etc
    private:
    public:
        Sort() {}
    void bubble_sort(std::vector<int>& arr) {
        // Time O(n^2)
        // Space O(1)
        for (auto i= 0; i < arr.size(); i++) {
            for (auto j= i+1; j < arr.size(); j++) {
                if (arr[j] < arr[i]) {
                    int temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                }
            }
        }
    }

    void heap_sort(std::vector<int> & arr, std::priority_queue<int, std::vector<int>, std::greater<int>>& min_heap) {
        // I'll implement from scratch in subsequent activities, 
        // for now, I'll just use the builtin priority queue data structure to create a min heap.
        // we'll take in the arr by reference, so we can direclty modify it in place.
        // Time: O(nlogn) - heap insertion takes O(logn) but we have to insert n items -> n * log(n) = O(nlogn)
        // Space: O(n) extra space for out heap.
        for (int& digit: arr) {
            min_heap.push(digit);
        }

        size_t i = 0;
        while (!min_heap.empty()) {
            arr[i++] = min_heap.top(); // put the top node - the min, at idx i in the array - this will sort it.
             // remove the node we just inserted into the array to let the next smallest element to be at the top
            min_heap.pop(); 

        }
    }

    void insertion_sort(std::vector<int>& nums) {


        for(size_t k = 1; k < nums.size(); k++) {
            // kth element:
            int target = nums[k]; // target to insert in sorted array
            int j = k - 1; // 0 -> j contains the sorted elements

            // iterate from j -> 0 ... those are our sorted elements, insert at right pos
            // if out kth element (target) is less than arr[j] in arr[0...j], then update arr[j] = the kth element
            // now where do we store the number we just swapped out??
            // in temp var?
            // how do we shift all items one to the right??

            while (j >= 0 && nums[j] > target) {


                // std::cout << target << " < " << nums[j] << std::endl;

                // but here's the catch, nums[j + 1] = target, so we're modifying the target??
                // but we do store a copy in a var, so it's ight i guess - we not modifying its reference
                nums[j + 1] = nums[j];

                j--;

            }

            nums[j + 1] = target;

        }


    }

};

int main(void) {
    Sort sort;
    std::vector<int> arr = {2, 3, 1, 2, 0, 3, 1, 2,4, 1,11, 4, 55};
    std::priority_queue<int, std::vector<int>, std::greater<int>> min_heap;

    // sort.heap_sort(arr, min_heap);
    std::println("Array befor sorting: {}", arr);


    sort.insertion_sort(arr);

    std::println("Array after sorting: {}", arr);


}