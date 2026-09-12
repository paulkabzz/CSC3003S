class Solution {
std::string rle(std::string s) {
    std::string res = "";

    int current_frequency = 1;
    for (int i = 0; i <= s.length() - 1; i++) {
        if (s[i] == s[i+1]) 
        {
            current_frequency++;
        } else 
        {
            res += (std::to_string(current_frequency) + s[i]);
            current_frequency = 1;
        }
    }

    return res;
}
public:
    string countAndSay(int n) {

        std::string res = "1";

        for (int i = 1; i <= n - 1; i++) {
            res = rle(res);
        }

        return res;

    }
};