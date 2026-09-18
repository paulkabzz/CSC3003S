class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        std::vector<std::vector<int>> res;

        if (nums.size() <= 1) 
        {
            res.push_back(nums);
            return res;
        }

        // the item we'll be inserting into our permutaions
        int last_element = nums[nums.size() - 1];
        std::vector<int> subset = nums;
        subset.pop_back();
        std::vector<std::vector<int>> sub_permutations = permute(subset);

        for (std::vector<int> & permutation: sub_permutations) 
        {
            for (size_t i = 0; i < permutation.size() + 1; i++)
            {
                std::vector<int> new_permutation;

                for (size_t j = 0; j < i; j++)
                    new_permutation.push_back(permutation[j]);
                
                new_permutation.push_back(last_element);

                for (size_t j = i; j < permutation.size(); j++) {
                    new_permutation.push_back(permutation[j]);
                }

                res.push_back(new_permutation);
            }
        }

        return res;

        
    }
};