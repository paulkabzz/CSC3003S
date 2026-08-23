class Solution {
    public int[][] kClosest(int[][] points, int k) {
        HashMap<Integer, Double> m  = new HashMap<>(); // store dist at idx i
        // always keep shortest dist at top - min heap
        PriorityQueue<Integer> q = new PriorityQueue<Integer>( (a, b) -> m.get(a).compareTo(m.get(b)));

        for (int i = 0; i < points.length; i++) {
            m.put(i, Math.sqrt(Math.pow(points[i][0], 2) + Math.pow(points[i][1], 2)));
        }

        q.addAll(m.keySet());

        int[][] r = new int[k][2];

        for (int i = 0; i < k; i++) {
            int[] p = points[q.poll()];
            r[i][0] = p[0];
            r[i][1] = p[1];
        }

        return r;


        
    }
}