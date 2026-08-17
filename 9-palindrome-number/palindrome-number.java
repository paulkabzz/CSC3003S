class Solution {
    public boolean isPalindrome(int x) {

        if (x < 0) return false;

        double y = 0;
        int temp = x;

        while (temp > 0) {

            int digit = temp % 10;
            y += digit;

            temp /= 10;
            y *= 10;

        }

        y /= 10;

        return  y == x;
        
    }
}