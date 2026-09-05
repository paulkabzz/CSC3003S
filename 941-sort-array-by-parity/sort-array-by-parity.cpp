class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        size_t i = 0;
        size_t j = nums.size() - 1;

        while ( i < j) {
            if (nums[i] % 2 != 0) {
                if (nums[j] % 2 == 0) {

                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
                j--;
            } else {
                i++;

            }
        }
        return nums;
  
    }
};