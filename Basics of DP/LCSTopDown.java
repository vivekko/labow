import java.util.Arrays;
import java.util.Scanner;
public class LCSTopDown {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s1 = in.next();
        int m = s1.length();
        String s2 = in.next();
        int n = s2.length();
        int [][]dp = new int[m+1][n+1];
        for(int []row:dp)
            Arrays.fill(row, -1);
        int ans = lcs(s1,s2,m,n,dp);
        System.out.println(ans);
        in.close();
    }
    private static int lcs(String s1,String s2,int m,int n,int [][]dp){
        if(m==0 || n==0)
            return 0;
        if(dp[m][n]!=-1)
            return dp[m][n];
        else{
        if(s1.charAt(m-1)==s2.charAt(n-1))
            return dp[m][n] = 1+lcs(s1, s2, m-1, n-1,dp);
        else{
            return dp[m][n] = Math.max(lcs(s1, s2, m-1, n, dp),lcs(s1, s2, m, n-1,dp));
        }
    }
    }
}