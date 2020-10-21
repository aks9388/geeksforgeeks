class Solution {
	public static void main(String[] args) {
        Solution sol = new Solution();
        sol.sequence(13);
    }

    private void sequence(int n) {
        int[] s = new int[n+1];
        s[0] = 0;
        s[1] = 1;
        s[2] = 1;

        for(int i=3;i<=n;i++){
            s[i] = s[s[i-1]] + s[i-s[i-1]];
        }
        for(int i=1;i<=n;i++){
            System.out.print(s[i]+" ");
        }
    }
}