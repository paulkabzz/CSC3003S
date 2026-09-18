class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int* n = new int[26]{};
        int sum = 0;

        for (int i = 0; i < s.length(); i++) {
            n[s[i] - 'a'] = i;
        }
        for (int i = 0; i < t.length(); i++) {
            sum += std::abs(n[t[i] - 'a'] - i);
        }

        delete[] n;

        return sum;
    }
};