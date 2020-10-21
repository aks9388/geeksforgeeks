class Solution {
	public static void main(String[] args) {
        Solution sol = new Solution();
        int result = sol.noOfWays(3,6);
        System.out.println(result);
    }

    private int noOfWays(int n, int m) {
        
        int[][] ways = new int[n+1][m+1];
        for(int i=1;i<=n;i++){
            ways[i][0]=1;
        }
        for(int i=1;i<=m;i++){
            ways[0][i]=1;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                ways[i][j]= ways[i-1][j]+ ways[i][j-1];
            }
        }
        return ways[n][m];
    }
    private int noOfWaysRecursion(int n, int m) {
        if(n==0 || m==0){
            return 1;
        }
        return noOfWays(n-1,m) + noOfWays(n,m-1);
    }
}