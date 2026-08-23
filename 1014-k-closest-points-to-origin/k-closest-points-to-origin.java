class Solution {
    private int d(int[] a) {
        return  (a[0]* a[0]) + (a[1] * a[1]);
    }
    public int[][] kClosest(int[][] points, int k) {
        // always keep shortest dist at top - min heap
        PriorityQueue<int[]> q = new PriorityQueue<>( (a, b) -> d(b) - d(a));

        for (int i = 0; i < points.length; i++) {
            q.offer(points[i]);
            if (q.size() > k) {
                q.poll();
            }
        }

        int[][] r = new int[k][2];

        for (int i = 0; i < k; i++) {
            r[i] = q.poll();
        }

        return r;
        
    }
}