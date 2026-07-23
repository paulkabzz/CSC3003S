class Solution {
    public int[] nextGreaterElement(int[] nums1, int[] nums2) {
        HashMap<Integer, Integer> m = new HashMap<>();

        for (int i = 0; i < nums2.length; i++) {
            m.put(nums2[i], i);
        }

        for (int i = 0; i < nums1.length; i++) {
            int n = nums1[i];
            for (int j = m.get(n); j < nums2.length; j++) {
                if (nums2[j] > n) {
                    nums1[i] = nums2[j];
                    break;
                } else if (j == nums2.length - 1) {
                    nums1[i] = -1;
                }
            }
        }

        return nums1;
        
    }
}