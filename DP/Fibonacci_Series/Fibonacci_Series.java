class Solution {
	public static void main(String[] args) {
        Solution sol = new Solution();
        sol.fibSequence(13);
    }

    private void fibSequence(int n) {
        int[] s = new int[n];
        s[0] = 0;
        s[1] = 1;

        for(int i=2;i<n;i++){
            s[i] = s[i-1]+s[i-2];
        }
        for(int i=0;i<n;i++){
            System.out.print(s[i]+" ");
        }
    }
}