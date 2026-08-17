class Solution {
    public boolean isPalindrome(int x) {

        if (x < 0) return false;

        double y = 0;
        int temp = x;

        while (temp > 0) {
            y += (temp % 10);
            temp /= 10;
            y *= 10;
        }

        y /= 10;

        return  y == x;
        
    }
}