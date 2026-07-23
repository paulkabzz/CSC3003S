class Solution {
    public String[] findWords(String[] words) {
        String r1 = "qwertyuiop";
        String r2 = "asdfghjkl";
        String r3 = "zxcvbnm";

        HashMap<Character, Integer> m = new HashMap<>();
        ArrayList<String> l = new ArrayList<>();

        for (int i = 0; i < r1.length(); i++) {
            m.put(r1.charAt(i), 1);
        }

        for (int i = 0; i < r2.length(); i++) {
            m.put(r2.charAt(i), 2);
        }

        for (int i = 0; i < r3.length(); i++) {
            m.put(r3.charAt(i), 3);
        }


        for (int i = 0; i < words.length; i++) {
            l.add(words[i]);
        }

        for (int i = 0; i < words.length; i++) {
            String word = words[i];

            for (int j = 0; j < word.length() - 1; j++) {
                char c1 = word.toLowerCase().charAt(j);
                char c2 = word.toLowerCase().charAt(j + 1); 

                if (!(m.get(c1) - m.get(c2) == 0)) {

                    // System.out.printf("C1: %s%n C2%s%n ", c1, c2);
                    l.remove(word);
                    break;
                } 

                
            }


        }

        String[] res = new String[l.size()];

        for (int i = 0; i < l.size(); i++) {
            res[i] = l.get(i);
        }

        return res;
        
    }
}