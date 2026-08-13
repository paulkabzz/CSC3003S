class Solution {
    public boolean isAnagram(String s, String t) {
        HashMap<Character, Integer> m = new HashMap<>();

        if (s.length() != t.length()) return false;

        for (int i = 0; i < s.length(); i++) {
            m.put(s.charAt(i), m.getOrDefault(s.charAt(i), 0) + 1);
        }

        for (int i = 0; i < t.length(); i++) {
            if (m.containsKey(t.charAt(i))) {
                m.put(t.charAt(i), m.get(t.charAt(i)) - 1);
            } else return false;
        }

        for (Map.Entry<Character, Integer> entries: m.entrySet()) {
            if (entries.getValue() > 0) return false;
        }
        return true;

        
        
    }
}