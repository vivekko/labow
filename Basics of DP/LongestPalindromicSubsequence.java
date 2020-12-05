import java.util.Scanner;

public class LongestPalindromicSubsequence {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String pal = in.next();
        StringBuilder p = new StringBuilder(pal);
        p.reverse();
        int ans = lcs(pal,p);
        System.out.println(ans + " "+ Integer.MAX_VALUE);
        in.close();
    }

    private static int lcs(String pal, StringBuilder p) {
        int m = pal.length();
        int n = p.length();
        int dp[][] = new int[m+1][n+1];
        for(int i=0;i<=m;i++)
            for(int j = 0;j<=n;j++){
                if(i==0||j==0) 
                    dp[i][j] = 0;
                else if(pal.charAt(i-1) == p.charAt(j-1))
                    dp[i][j] = dp[i-1][j-1]+1;
                else{
                    dp[i][j] = Math.max(dp[i-1][j],dp[i][j-1]);
                }
            }
        return dp[m][n];
    }
}