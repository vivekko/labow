import java.util.Scanner;

public class LCSBottomUp {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s1 = in.next();
        int m = s1.length();
        String s2 = in.next();
        int n = s2.length();
        // int [][]dp = new int[m+1][n+1];
        // for(int []row:dp)
        //     Arrays.fill(row, -1);
        int ans = lcs(s1,s2,m,n);
        System.out.println(ans);
        in.close();
    }

    private static int lcs(String s1, String s2, int m, int n) {
        int [][]dp = new int[m+1][n+1];
        for(int i=0;i<=m;i++){
            dp[i][0] = 0;
        }
        for(int i=0;i<=n;i++){
            dp[0][i] = 0;
        }
        for(int i=1;i<=m;i++)
            for(int j = 1;j<=n;j++){
                if(s1.charAt(i-1) == s2.charAt(j-1)){
                    dp[i][j] = 1+ dp[i-1][j-1];
                }
                else{
                    dp[i][j] = Math.max(dp[i-1][j], dp[i][j-1]);
                }
            }
        return dp[m][n];
    }
}
