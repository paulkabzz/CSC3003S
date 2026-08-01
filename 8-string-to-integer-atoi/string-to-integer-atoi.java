class Solution {
    public int myAtoi(String s) {
        if (s.isEmpty() || s == null || !s.matches(".*\\d.*")) return 0;

        s = s.stripLeading();
  
        boolean isNeg = s.charAt(0) == '-' ? true: false;

        if (isNeg || s.charAt(0) == '+') {
            s = s.substring(1, s.length());
        } 

        s = s.split("\\D+")[0];

        int len = s.length() - 1;
        long res = 0;

        for (int i = 0; i < s.length(); i++) {
            res += (s.charAt(i) - '0') * Math.pow(10, len);
            len--;
        }

        if (isNeg) {
            res = -res;
        }

        return (res < Integer.MAX_VALUE && res > Integer.MIN_VALUE) ? (int)res: (isNeg ? Integer.MIN_VALUE : Integer.MAX_VALUE);
    }
}