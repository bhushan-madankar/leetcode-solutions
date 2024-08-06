class Solution {
    public int minHeightShelves(int[][] books, int shelf) {
        int[] dp = new int[books.length];
        Arrays.fill(dp,-1);
        int ans = helper(0,books,shelf,dp);
        return ans;
    }
    public int helper(int i,int[][] books , int shelf,int[] dp){
        if(i>=books.length) return 0;
        if(dp[i] != -1) return dp[i];
        int width =0,max=0;
        int ans = Integer.MAX_VALUE;
        for(int j=i;j<books.length;j++){
            width+=books[j][0];
            if(width>shelf) break;
            max =Math.max(max,books[j][1]);
            ans = Math.min(max+helper(j+1,books,shelf,dp),ans);
        }
        return dp[i]=ans;
    }
}
