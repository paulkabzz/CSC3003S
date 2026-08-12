class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        HashMap<Integer, Integer> m = new HashMap<>();
        PriorityQueue<Integer> q = new PriorityQueue<>((a, b) -> m.get(a) - m.get(b));

        for (int i = 0; i < nums.length; i++) {
            if (!m.containsKey(nums[i])) {
                m.put(nums[i], 1);
            } else {
                m.put(nums[i], m.get(nums[i]) + 1);
            }
        }

        int[] r = new int[k];

        for (Map.Entry<Integer, Integer> entries: m.entrySet()) {

            q.offer(entries.getKey());
            if (q.size() > k) {
                q.poll();
            }

        }

        for (int i = 0; i < k; i++) {
            r[i] = q.poll();
        }

        return r;

    }

}