class Solution {
    public boolean isAnagram(String s, String t) {

        // store frequency of each character from s in map
        // every time you come across that character in t, subtract from the freq
        // if all chars have freq of 0, then valid anagrams

        HashMap<Character, Integer> m = new HashMap<>();

        if (s.length() != t.length()) return false;

        for (int i = 0; i < s.length(); i++) {
            if (!m.containsKey(s.charAt(i))) {
                m.put(s.charAt(i), 1);
            } else {
                m.put(s.charAt(i), m.get(s.charAt(i)) + 1);
            }
        }

        for (int i = 0; i < t.length(); i++) {
            if (m.containsKey(t.charAt(i))) {
                m.put(t.charAt(i), m.get(t.charAt(i)) - 1);
            }
        }

        for (Map.Entry<Character, Integer> entries: m.entrySet()) {
            if (entries.getValue() > 0) return false;
        }
        return true;

        
        
    }
}