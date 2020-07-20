import java.util.Scanner;

public class MinimumNumberOfInsertionsAndDeletionsToEqualizeString {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String a = in.next();
        String b = in.next();
        int m = a.length();
        int n = b.length();
        int lcs = helper(a,b,m,n);
        int ans = m+n-2*lcs;
        System.out.println(ans);
        in.close();
    }

    private static int helper(String a, String b, int m, int n) {
        int dp[][] = new int[m+1][n+1];
        for(int i=0;i<=m;i++)
            for(int j=0;j<=n;j++){
                if(i==0||j==0) dp[i][j] = 0;
                else if(a.charAt(i-1)==b.charAt(j-1))
                    dp[i][j] = 1+dp[i-1][j-1];
                else
                    dp[i][j] = Math.max(dp[i-1][j], dp[i][j-1]);
            }
        return dp[m][n];
    }
}