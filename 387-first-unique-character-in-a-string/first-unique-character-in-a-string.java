class Solution {
    public int firstUniqChar(String s) {
        int[] r = new int[26];

        for (int i = 0; i < s.length(); i++) {
            r[s.charAt(i) - 'a']++;
        }

        for (int i = 0; i < s.length(); i++) {
            if (r[s.charAt(i) - 'a'] == 1) return i;
        }

        return -1;
    }
}