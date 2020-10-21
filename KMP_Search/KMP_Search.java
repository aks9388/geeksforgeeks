class Solution {
    public int KMPSerach(String str, String pat) {
        char[] searchText = str.toCharArray();
        char[] pattern = pat.toCharArray();
        int []lps = computeLPS(pattern);
        int i=0;
        int j=0;
        while(i<searchText.length && j<pattern.length){
            if(searchText[i]==pattern[j]){
                i++;
                j++;
            }
            else{
                if(j!=0){
                    j = lps[j-1];
                }
                else{
                    i++;
                }
            }
        }
        if(j==pattern.length){
            return i-pattern.length;
        }
        return -1;
    }
	
    private int[] computeLPS(char[] pattern) {
        int i=0;
        int []lps = new int[pattern.length];
        for(int j=1;j<pattern.length;){
            if(pattern[i]==pattern[j]){
                lps[j] = i+1;
                i++;
                j++;
            }
            else{
                if(i!=0){
                    i = lps[i-1];
                }
                else{
                    lps[j]=0;
                    j++;
                }
            }
        }
        return lps;
    }

    public static void main(String[] args) {
        Solution sol = new Solution();
        int result = sol.KMPSerach("abcxabcdabcdabcy","abcdabcy");
        System.out.println(result);
    }
}