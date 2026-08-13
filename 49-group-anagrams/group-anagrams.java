class Solution {
    public String makeKey(String s) {
        int[] k = new int[26];

        StringBuilder sb = new StringBuilder();

        for (int i = 0; i < s.length(); i++) {
            k[s.charAt(i) - 97]++;
        }

        for (int n: k) {
            sb.append(n + "-");
        }

        return sb.toString();
    }
    public List<List<String>> groupAnagrams(String[] strs) {

        List<List<String>> res = new ArrayList<>();

        HashMap<String, ArrayList<String>> m = new HashMap<>();

        for (String s: strs) {
            String key = makeKey(s);
            if (!m.containsKey(key)) {
                m.put(key, new ArrayList<>(Arrays.asList(s)));
            } else {
                ArrayList<String> l = m.get(key);
                l.add(s);
                m.put(key, l);
            }
        }

        return new ArrayList(m.values());
        
    }
}