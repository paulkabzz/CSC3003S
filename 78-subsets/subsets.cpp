class Solution {
    std::vector<std::vector<int>> sets(std::vector<std::vector<int>> &in, std::vector<int> &n) {
        if (n.size() == 0) {
            in.push_back(std::vector<int>());
            return in;
        } else {
            int last_int = n[n.size() - 1];
            n.pop_back();

            auto sub_set = sets(in, n);

            std::vector<std::vector<int>> s;

            for (auto x: sub_set) {
                x.push_back(last_int);
                s.push_back(x);
            }

            for (const auto x: s) {
                sub_set.push_back(x);
            }

            return sub_set;

        }
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        std::vector<std::vector<int>> s;
        s = sets(s, nums);
        return s;
    }
};