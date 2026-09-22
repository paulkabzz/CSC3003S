class Solution {
    int cnt = 0;
    void sum(vector<int>& nums, size_t idx, int score, int target) {
        if (idx == nums.size()) {
            if (score == target) {
                cnt++;
            }

            return ;
        }

        // add
        score += nums[idx];
        sum(nums, idx+1, score, target);
        score -= nums[idx];

        //sub
        score -= nums[idx];
        sum(nums, idx + 1, score, target);
        score += nums[idx]; 

    }
public:

    int findTargetSumWays(vector<int>& nums, int target) {
        sum(nums, 0, 0, target);
        return cnt;
    }
};