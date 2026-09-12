class Solution {
public:
    char findTheDifference(string s, string t) {
        if (s.empty()) return t[0];

        int* arr = new int[26]{};

        for (int i = 0; i < t.length(); i++) {
            if (i < s.length()) arr[s[i] - 'a']++;
            arr[t[i] - 'a']--;
        }

        for (int i = 0; i < 26; i++) {
            if (arr[i] < 0) return i + 'a';
        }

        delete[] arr;

        return t[0];
    }
};