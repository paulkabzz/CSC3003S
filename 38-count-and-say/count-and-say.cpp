class Solution {
std::string rle(std::string s) {
    // int* freq = new int[10]{};

    // for (int i = 0; i < s.length(); i++)
    // {   
    //     // std::cout << "Index of " << s[i] << " = " << s[i] - 48 << std::endl;
    //     freq[s[i] - 48]++;
    // }
    
    // std::string res = "";

    // for (int i = 0; i < s.length(); i++) {
    //     // iterate through freq...
    //     // check if that freq is non-zero
    //     // if non-zero, we want to append in correct order. that is, freq[]
    //     if (freq[s[i] - 48] != 0) {
    //         res += (std::to_string(freq[s[i] - 48]) + s[i]);
    //     }
    // }

    // delete[] freq;
    // return res;

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