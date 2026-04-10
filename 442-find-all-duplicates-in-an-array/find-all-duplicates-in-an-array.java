class Solution {
    public List<Integer> findDuplicates(int[] nums) {
        List<Integer> res = new ArrayList<>();
        HashMap<Integer, Integer> m = new HashMap<>();

        for (int i = 0; i < nums.length; i++) {
            if (!m.containsKey(nums[i])) {
                m.put(nums[i], 1);
            } else {
                res.add(nums[i]);
                // m.put(nums[i], m.get(nums[i]) + 1);
            }
        }

        // for (Map.Entry<Integer, Integer> e: m.entrySet()) {
        //     if (e.getValue() == 2)  res.add(e.getKey());
        // }

        return res;

    }
}