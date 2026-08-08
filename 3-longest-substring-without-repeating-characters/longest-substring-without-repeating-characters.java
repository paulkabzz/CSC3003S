class Solution {
    public int lengthOfLongestSubstring(String s) {
        HashSet<Character> set = new HashSet<>();

        int l = 0;
        int r = 0;
        int cnt = 0;

        while (r < s.length()) {
            if (set.contains(s.charAt(r))) {
                set.clear();
                l++;
                r = l;               
            } else {
                 set.add(s.charAt(r));
                 r++;
            }
            cnt = Math.max(r - l, cnt);

            // r++;
        }
        return  cnt;
        
    }
}