class Solution {

    std::set<std::vector<int>> set;

    std::vector<std::vector<int>> ps(std::vector<std::vector<int>> &in, std::vector<int> &n) {
        // use set, return to thsi
        if (n.size() <= 0) {
            in.push_back(std::vector<int>());
            return in;
        } else {
            int last = n[n.size() - 1];
            
            n.pop_back();

            auto L = ps(in, n);
            std::vector<std::vector<int>> s;

            for (auto x: L) {
                x.push_back(last);
                s.push_back(x);
            }

            for (auto x: s) {
                std::sort(x.begin(), x.end()); 

                if (!set.contains(x))
                {   
                    L.push_back(x);
                    set.insert(x);
                }
                
            }
            
            std::sort(L.begin(), L.end());
            return L;
        }
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        std::vector<std::vector<int>> s;
        s = ps(s, nums);
        return s;
    }   
};