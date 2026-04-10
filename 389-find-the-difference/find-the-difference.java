class Solution {

    // steps
    // check freq
    // varying -> new char?
    // loop, remove chars feq, if < 0 -> that is added char

    // Inefficient - O(n) time + O(2n) = O(n) auxilliary space

    // come back to this
    public char findTheDifference(String s, String t) {
        Map<Character, Integer> m = new HashMap<>(); // chached chars

        for (int i = 0; i < s.length(); i++) {
            if (!m.containsKey(s.charAt(i))) {
                m.put(s.charAt(i), 0);
            } else {
                m.put(s.charAt(i), m.get(s.charAt(i)) + 1);
            }
        }

        for (int i = 0; i < t.length(); i++) {
            if (!m.containsKey(t.charAt(i))) {
                return t.charAt(i);
            } else {
                if (m.get(t.charAt(i)) < 0) return t.charAt(i);

                m.put(t.charAt(i), m.get(t.charAt(i)) - 1);
            }
        }

        return t.charAt(0);
        
    }
}