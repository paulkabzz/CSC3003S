class Solution {
    public int maxProfit(int[] prices) {
        int prof = 0;
        int r = 1;
        int l = 0;

        while (r < prices.length) {
            if (prices[r] - prices[l] > 0) {
                prof = Math.max(prices[r] - prices[l], prof);
            } else {
                l = r;
            }
            r++;
        }

        return prof;
    }
}