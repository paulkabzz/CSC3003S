int firstUniqChar(char* s) {
    unsigned int freq[26] = {0};


    for (int i = 0; s[i] != '\0'; i++) {
        int index = s[i] - 'a';
        freq[index]++;
    }

    for (int i = 0;  s[i] != '\0'; i++) {

        if (freq[s[i] - 'a'] == 1) return i;
    }

    return -1;
}