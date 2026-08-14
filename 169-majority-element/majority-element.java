class Solution {
    public int majorityElement(int[] nums) {
        HashMap<Integer, Integer> m = new HashMap<>();

        for (int n: nums) {
            m.putIfAbsent(n, 0);
            m.put(n, m.get(n) + 1);
        }

        for (Map.Entry<Integer, Integer> e: m.entrySet()) {
            if (e.getValue() > Math.floor(nums.length/2) ) return e.getKey();
        }

        return -1;
        
    }
}