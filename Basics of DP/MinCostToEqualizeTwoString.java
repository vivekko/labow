import java.util.Scanner;

public class MinCostToEqualizeTwoString {

	public static void main (String[] args) {
// 	 public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-->0){
        int c1 = in.nextInt();
        int c2 = in.nextInt();
        String a = in.next();
        String b = in.next();
        int m = a.length();
        int n = b.length();
        int lcs = helper(a,b,m,n);
        int ins = c1*(m-lcs);
        int del = c2*(n-lcs);
        System.out.println(ins+del);
        }
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