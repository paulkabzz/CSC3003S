class Solution {

    // steps
    // check freq
    // varying -> new char?
    // loop, remove chars feq, if < 0 -> that is added char
    public char findTheDifference(String s, String t) {
        Map<Character, Integer> m = new HashMap<>(); // chached chars
        Map<Character, Integer> n = new HashMap<>();

        for (int i = 0; i < s.length(); i++) {
            if (!m.containsKey(s.charAt(i))) {
                m.put(s.charAt(i), 0);
            } else {
                m.put(s.charAt(i), m.get(s.charAt(i)) + 1);
            }
        }


        for (int i = 0; i < t.length(); i++) {
            if (!n.containsKey(t.charAt(i))) {
                n.put(t.charAt(i), 0);
            } else {
                n.put(t.charAt(i), n.get(t.charAt(i)) + 1);
            }
        }

        for (Map.Entry<Character, Integer> entry: n.entrySet()) {
            char _t = entry.getKey();

            if (!m.containsKey(_t)) return _t;
            else if (m.get(_t) != entry.getValue()) return _t;
        }

        return t.charAt(0);
        
    }
}