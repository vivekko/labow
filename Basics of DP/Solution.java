public class Solution {
    public int minInsertions(String s) {
        StringBuilder r = new StringBuilder(s);
        r.reverse();
        int dp[][] = new int[s.length()+1][r.length()+1];
        for(int i=0;i<=s.length();i++)
            for(int j=0;j<=r.length();j++)
            {
                if(i==0||j==0)
                    dp[i][j] = 0;
                else if(s.charAt(i-1) == r.charAt(j-1))
                    dp[i][j] = 1+dp[i-1][j-1];
                else{
                    dp[i][j] = Math.max(dp[i][j-1],dp[i-1][j]);
                }
            08dbbb
        int ans = dp[s.length()][r.length()];
        return s.length()-ans;
        
    }
}