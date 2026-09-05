class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        size_t i = 0;
        size_t j = 1;


      size_t even_idx = 0;
        size_t odd_idx = even_idx+1;

        while (even_idx < nums.size() && odd_idx < nums.size()) {
            if (nums[even_idx] % 2 != 0) {
                // even index has odd element
                if (nums[odd_idx] % 2 == 0) {
                    // odd has even element
                    int temp = nums[even_idx];
                    nums[even_idx] = nums[odd_idx];
                    nums[odd_idx] = temp;
                } else {
                    // odd has odd element?
                    odd_idx+= 2;
                }
            } else even_idx +=2;
            //  else if (nums[odd_idx] %2 != 0) {
            //      if (nums[even_idx] % 2 != 0) {
            //         int temp = nums[odd_idx];
            //         nums[odd_idx] = nums[even_idx];
            //         nums[even_idx] = temp;
            //     } else {
            //         even_idx+= 2;
            //     }
            // } else {
            //     even_idx +=2;
            //     odd_idx +=2;
            // }
        }
        return nums;

    }
};